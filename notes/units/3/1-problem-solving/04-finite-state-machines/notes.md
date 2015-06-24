Finite state machines
---------------------

### Overview

A **finite state machine** (FSM) is a model used to design programs and
algorithms. Real-life applications include:

  * traffic lights
  * vending machines
  * regular expressions
  * language parsing

FSMs are *abstract machines* which can be in one of a finite number of
states at any one time (named the **current state**). A change from the
current state to another state is called a **transition**.

An FSM which does not produce output is known as **finite state
automaton** (FSA). FSMs which do produce output are classified into
**Mealy** and **Moore** machines -- more on those later. Remember that
an 'output' can be also be an *action*!

FSMs have a defined set of input symbols, named the **input alphabet**,
and if they produce output then they have an **output alphabet**.

A **state transition diagram** is a special type of directed graph.
Nodes represent states and arcs represent a transition between two
states.  Arcs are labelled with a symbolic code, e.g. *a | b*. *a* is
the **trigger** and denotes the input symbol, and *b* (optional, depends
on the FSM type) denotes the output symbol. That is, a **label** is a
trigger-output pair.


### Transition table example

Remember that FSMs has a *finite set of states*. For this example, let's
imagine an FSM with states {s, t}, input alphabet {a, b} and output
alphabet {a, b}. This FSM has a **transition function** which maps a
state-symbol pair to a new state and we'll say that it also generates an
specific output symbol for each transition. We can use a **transition
table** to represent this transition function:

    Current state | s | s | t | t
    --------------|---|---|---|---
    Input symbol  | a | b | a | b
    --------------|---|---|---|---
    Next state    | t | s | s | t
    --------------|---|---|---|---
    Output symbol | b | a | b | a

It should be clear that this FSM changes 'b's into 'a's and vice versa.

In order to make the FSM **deterministic**, it is required that each
trigger has *only one outgoing transition from any one state* at most
(there can of course be zero). So if there were two different
transitions for the same trigger on one state, that FSM would be
**non-deterministic** since it contains an ambiguity.


### Halting states & errors

A state which has no outgoing transitions is called a **halting
state**. Most of the time, if an FSM is stuck in a halting state with
input remaining, it will report an error.

If the input trigger doesn't exist for the current state, an error is
usually reported.


### FSM designs

  * Action instead of outputting e.g. a symbol
  * 'Signal' instead of input symbol
  * 'Catch-all' case if ([input symbol, ]current state) --> (action,
    next state) produces no matches -- e.g. exception handler
    state/action called
  * A transition to a specific state can have multiple labels
    (trigger/output pair)


### FSMs with output

As explained earlier, there are two types of FSM: ones without output
(automata) and ones with output. FSAs are restricted to binary
decisions. FSMs with output may be further classified into **Mealy
machines** and **Moore machines**.

See the book for a decent example that I don't want to recreate here.
Some definitions:

**Mealy machine:** determines its outputs from current state & inputs --
i.e. *during state transition*

**Moore machine:** determines its outputs from current state -- i.e.
*the state is the output*

Because the current state in a Moore FSM is determined by the sequence
of inputs it has processed, it possesses memory capability. The
textbook says that a Moore machine actually *models a RAM unit*, which
may be important to know.


### Finite state automata

FSAs solve YES/NO decision problems, i.e. "does a string match this
pattern?".

An accepting state is one which would cause the FSA to produce a YES
response if it ended there -- ending on a non-accepting state would
produce a NO response. They are indicated by a double ring around the
state name. An FSA **always** has >= 1 accepting states.
