Finite state machines
---------------------

### Overview & term definitions

**Finite state machine:** consists of an input symbol **alphabet**,
an output symbol alphabet (if it produces output), a *finite* set of
states and a transition function that maps a state-symbol pair to a
state, and may generate output (depending on the type of FSM).

**Transition function:** maps (input symbol, current state) --> (output
symbol, next state)

**Transition table:** transition function in table format

A **finite state machine** (FSM) is a model used to design programs and
algorithms. Real-life applications include:

  * traffic lights
  * vending machines
  * regular expressions
  * language parsing

FSMs are *abstract machines* which can be in one of a finite number of
states at any one time (named the **current state**). A change from the
current state to another state is called a **transition**.

FSMs may also produce output -- however, they aren't required to.

FSMs have a defined set of input symbols, named the **input alphabet**,
and if they produce output then they have an **output alphabet**.

A **state transition diagram** is a special type of directed graph.
Nodes represent states and arcs represent a transition between two
states.  Arcs are labelled with a symbolic code, e.g. *a | b*. *a* is
the **trigger** and denotes the input symbol, and *b* (optional, depends
on the FSM type) denotes the output symbol.


### Transition table example

Remember that FSMs has a *finite set of states*. For this example, let's
imagine an FSM with states {s, t}, input alphabet {a, b} and output
alphabet {a, b}. This FSM has a **transition function** which maps a
state-symbol pair to a new state and we'll say that it generates an
specific output symbol for each transition. We can use a **transition
table** to represent this transition function:

    Current state | s | s | t | t
    --------------|---|---|---|---
    Input symbol  | a | b | a | b
    --------------|---|---|---|---
    Next state    | t | s | s | t
    --------------|---|---|---|---
    Output symbol | b | a | b | a
