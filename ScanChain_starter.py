import copy
import cocotb
from cocotb.triggers import Timer


# Make sure to set FILE_NAME
# to the filepath of the .log
# file you are working with
CHAIN_LENGTH = -1
FILE_NAME    = "adder/adder.log"



# Holds information about a register
# in your design.

################
# DO NOT EDIT!!!
################
class Register:

    def __init__(self, name) -> None:
        self.name = name            # Name of register, as in .log file
        self.size = -1              # Number of bits in register

        self.bit_list = list()      # Set this to the register's contents, if you want to
        self.index_list = list()    # List of bit mappings into chain. See handout

        self.first = -1             # LSB mapping into scan chain
        self.last  = -1             # MSB mapping into scan chain


# Holds information about the scan chain
# in your design.
        
################
# DO NOT EDIT!!!
################
class ScanChain:

    def __init__(self) -> None:
        self.registers = dict()     # Dictionary of Register objects, indexed by 
                                    # register name
        
        self.chain_length = 0       # Number of FFs in chain


# Sets up a new ScanChain object
# and returns it

################     
# DO NOT EDIT!!!
################
def setup_chain(filename):

    scan_chain = ScanChain()

    f = open(filename, "r")
    for line in f:
        linelist = line.split()
        index, name, bit = linelist[0], linelist[1], linelist[2]

        if name not in scan_chain.registers:
            reg = Register(name)
            reg.index_list.append((int(bit), int(index)))
            scan_chain.registers[name] = reg

        else:
            scan_chain.registers[name].index_list.append((int(bit), int(index)))
        
    f.close()

    for name in scan_chain.registers:
        cur_reg = scan_chain.registers[name]
        cur_reg.index_list.sort()
        new_list = list()
        for tuple in cur_reg.index_list:
            new_list.append(tuple[1])
        
        cur_reg.index_list = new_list
        cur_reg.bit_list   = [0] * len(new_list)
        cur_reg.size = len(new_list)
        cur_reg.first = new_list[0]
        cur_reg.last  = new_list[-1]
        scan_chain.chain_length += len(cur_reg.index_list)

    return scan_chain


# Prints info of given Register object

################
# DO NOT EDIT!!!
################
def print_register(reg):
    print("------------------")
    print(f"NAME:    {reg.name}")
    print(f"BITS:    {reg.bit_list}")
    print(f"INDICES: {reg.index_list}")
    print("------------------")


# Prints info of given ScanChain object

################   
# DO NOT EDIT!!!
################
def print_chain(chain):
    print("---CHAIN DISPLAY---\n")
    print(f"CHAIN SIZE: {chain.chain_length}\n")
    print("REGISTERS: \n")
    for name in chain.registers:
        cur_reg = chain.registers[name]
        print_register(cur_reg)



#-------------------------------------------------------------------

# This function steps the clock once.
    
# Hint: Use the Timer() builtin function
async def step_clock(dut):

    dut.clk.value = 1
    await Timer(10, units='ns')
    dut.clk.value = 0
    await Timer(10, units='ns')
    

#-------------------------------------------------------------------

# This function places a bit value inside FF of specified index.
        
# Hint: How many clocks would it take for value to reach
#       the specified FF?
        
async def input_chain_single(dut, bit, ff_index):

    dut.scan_en.value = 1
    dut.scan_in.value = bit

    for i in range(ff_index + 1):
        await step_clock(dut)

    
#-------------------------------------------------------------------

# This function places multiple bit values inside FFs of specified indexes.
# This is an upgrade of input_chain_single() and should be accomplished
#   for Part H of Task 1
        
# Hint: How many clocks would it take for value to reach
#       the specified FF?
        
async def input_chain(dut, bit_list, ff_index):

    dut.scan_en.value = 1
    await step_clock(dut)

    # get all bits in scan chain
    for i in range(len(bit_list)):
        dut.scan_in.value = bit_list[(len(bit_list) - 1 - i)]
        await step_clock(dut)
        # print(f"{dut.scan_in.value}\n\n")

    # shift over to desired index
    for i in range(ff_index):
        await step_clock(dut)

#-----------------------------------------------

# This function retrieves a single bit value from the
# chain at specified index 
        
async def output_chain_single(dut, ff_index):
    
    dut.scan_en.value = 1

    for i in range(CHAIN_LENGTH - ff_index):
        await step_clock(dut)

    return dut.scan_out.value

#-----------------------------------------------

# This function retrieves a single bit value from the
# chain at specified index 
# This is an upgrade of input_chain_single() and should be accomplished
#   for Part H of Task 1

async def output_chain(dut, ff_index, output_length):

    dut.scan_en.value = 1
    # await step_clock(dut)

    # initialize out_chain list
    out_chain = []
    for i in range(output_length):
        out_chain.append(0)

    for i in range((CHAIN_LENGTH - (ff_index + output_length)) - 1):
        await step_clock(dut)

    for i in range(output_length):
        out_chain[(output_length - 1) - i] = dut.scan_out.value
        await step_clock(dut)
        # print(f"{dut.scan_out.value}\n\n")

    return out_chain      

#-----------------------------------------------

# Your main testbench function

@cocotb.test()
async def test(dut):

    global CHAIN_LENGTH
    global FILE_NAME        # Make sure to edit this guy
                            # at the top of the file

    # Setup the scan chain object
    chain = setup_chain(FILE_NAME)
    CHAIN_LENGTH = chain.chain_length

    print_chain(chain)

    # zero out unused register
    zero = [0, 0, 0, 0, 0]

    # first index should be 0
    ff_index = 0

    # input values into scan chain
    await input_chain(dut, zero, ff_index)

    # disable scan_en and step the clock once to get values in
    dut.scan_en.value = 0
    await step_clock(dut)

    # set up bit_list for inputs
    # a_reg = 0b0001 = 1
    # b_reg = 0b0001 = 1
    bit_list = [0, 0, 0, 1, 0, 0, 0, 1]

    # first index should be 5 for a_reg
    ff_index = 5

    # input values into scan chain
    await input_chain(dut, bit_list, ff_index)

    # disable scan_en and step the clock once for combinational computation
    dut.scan_en.value = 0
    await step_clock(dut)

    # output length should be equal to length of x_out
    output_length = 5

    # first index should be 0 for x_out
    ff_index = 0

    # feed out values from output
    result = []
    result = await output_chain(dut, ff_index, output_length) # ff_index remains 0

    # print(f"result = {result}\n")
    assert result == [0, 0, 0, 1, 0] # 1 + 1 == 2 == 0b00010

@cocotb.test()
async def test_2(dut):

    global CHAIN_LENGTH
    global FILE_NAME        # Make sure to edit this guy
                            # at the top of the file

    # Setup the scan chain object
    chain = setup_chain(FILE_NAME)
    CHAIN_LENGTH = chain.chain_length

    print_chain(chain)

    # zero out unused register
    zero = [0, 0, 0, 0, 0]

    # first index should be 0
    ff_index = 0

    # input values into scan chain
    await input_chain(dut, zero, ff_index)

    # disable scan_en and step the clock once to get values in
    dut.scan_en.value = 0
    await step_clock(dut)

    # set up bit_list for inputs
    # a_reg = 0b1011 = 11
    # b_reg = 0b1110 = 14
    bit_list_2 = [1, 0, 1, 1, 1, 1, 1, 0]

    # first index should be 5 for a_reg
    ff_index = 5

    # input values into scan chain
    await input_chain(dut, bit_list_2, ff_index)

    # disable scan_en and step the clock once for combinational computation
    dut.scan_en.value = 0
    await step_clock(dut)

    # output length should be equal to length of x_out
    output_length = 5

    # first index should be 0 for x_out
    ff_index = 0

    # feed out values from output
    result = []
    result = await output_chain(dut, ff_index, output_length) # ff_index remains 0

    # print(f"result = {result}\n")
    assert result == [1, 1, 0, 0, 1] # 11 + 14 == 25 == 0b11001

