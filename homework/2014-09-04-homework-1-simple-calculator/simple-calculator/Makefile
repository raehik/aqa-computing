# Compiler options.
#	-Wall
#		Show lots more warnings. Useful.
CFLAGS=-Wall

# Linker options.
# It's basically an -l option with no space between it and its argument (e.g.
# ncurses). The prefix 'lib' and suffix '.so' can be omitted because all
# libraries have standardised names, so the linker finds what it's looking
# for.

#	-lncurses
#		Links to the ncurses library. It has a C/C++ interface, so
#		it should actually be totally fine using ncurses with C++.
#	-lm
#		Links to math.h library (or something).
LFLAGS=-lm

# The final executable to produce.
#	We're not making a library here or anything.
EXEC=calculator

# Objects which need to be compiled then eventually linked together.
OBJECTS=calculator.o

${EXEC}: ${OBJECTS}
	gcc ${CFLAGS} ${OBJECTS} -o ${EXEC} ${LFLAGS}

${OBJECTS}:

.PHONY: clean
clean:
	rm -rf ${OBJECTS} ${EXEC}
