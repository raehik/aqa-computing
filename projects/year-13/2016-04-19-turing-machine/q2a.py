#!/usr/bin/env python3

import sys

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
    print("({}, {}, {})".format(tape[:location], state, symbol, tape[location:]))

def dump_tape():
    print("State: {}".format(state))
    print("Location: {}".format(location))
    print("Current symbol: {}".format(symbol))
    print("Tape: {}".format(tape))


# set tape
tape = [ "b", "b", "a", "b", "b" ]

while True:
    read_symbol()

    if state == 1 and symbol == "b":
        set_state(1)
        write_sym("a")
        move("R")

    if state == 1 and symbol == "a":
        set_state(1)
        write_sym("b")
        move("R")

    if state == 1 and symbol == blank:
        set_state("stop")
        write_sym(blank)
        move("L")

    read_symbol()
    print_execution_stage()

    if state == "stop":
        dump_tape()
        sys.exit()
