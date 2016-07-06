#!/usr/bin/env python3

import sys
import time

# define constants
blank = "□"

# define globals
state = 1
symbol = blank
tape = []
location = 0

def error(msg, err_code):
    print("ERROR: {}".format(msg))
    sys.exit(err_code)

def set_state(new_state):
    global state
    state = new_state

def read_symbol():
    global symbol
    symbol = tape[location]

def write_sym(symbol):
    global tape
    tape[location] = symbol

def move(direction):
    global tape
    global location

    if direction == "L":
        # if we're at the left end of the tape & going left, report an error
        if location == 0:
            error("can't move any more left", 1)
        else:
            location += -1
    elif direction == "R":
        # if required, make the tape bigger
        if location == len(tape) - 1:
            tape.append(blank)
        location += 1
    else:
        error("{} is not a valid direction".format(direction), 2)

def print_execution_stage():
    print("({}, {}, {})".format(tape[:location], state, tape[location:]))

def dump_tape():
    print("State: {}".format(state))
    print("Location: {}".format(location))
    print("Current symbol: {}".format(symbol))
    print("Tape: {}".format(tape))


# set tape
location = 1
tape = [ blank, "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1", "1" ]

read_symbol()
print_execution_stage()
while True:
    read_symbol()

    if state == 1 and symbol == "1":
        set_state(2)
        write_sym("1")
        move("R")

    elif state == 2 and symbol == blank:
        set_state(3)
        write_sym("1")
        move("R")

    elif state == 2 and symbol == "1":
        set_state(2)
        write_sym("1")
        move("R")

    elif state == 3 and symbol == blank:
        set_state(4)
        write_sym(blank)
        move("L")

    elif state == 4 and symbol == blank:
        set_state("stop")
        write_sym(blank)
        move("R")

    elif state == 4 and symbol == "1":
        set_state(4)
        write_sym(1)
        move("L")

    else:
        print("ERROR: nothing to do")
        print_execution_stage()
        sys.exit()

    read_symbol()
    print_execution_stage()
    time.sleep(0.1)

    if state == "stop":
        dump_tape()
        sys.exit()
