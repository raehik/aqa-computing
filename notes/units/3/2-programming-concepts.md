Programming paradigms
---------------------

### Imperative/procedural programming

  * Specify sequence of operations in order to change the **program's state**
  * e.g. Java (with OOP features)


### Functional programming

  * Programs define **mathematical functions**
  * A solution to a problem consists of series of **function calls**
  * No variables, assignments
  * There are *lists* and *functions* that manipulate lists
  * e.g. Haskell


### Logic programming

  * A **knowledge base** is built up through writing **facts & rules** about a
    *'specific area of expertise'* (wtf)
  * Next, an **inference engine** with the ability to *backtrack* will use the
    knowledge base to answer queries (by responding to a **goal**)
  * e.g. Prolog (often used for AI)


### Event-driven programming

  * Subroutines are executed **in response to events**, rather than in an order
    specified by the programmer
  * All about having a **system loop** running from application life to death
  * If several events occur, they are put in a queue and the relevant handlers
    are executed in turn
  * e.g. most GUI frameworks


### Object-oriented programming

  * Build complex concepts/solve complex problems from putting together smaller
    blocks
  * Separation of concerns
  * Makes different levels of abstraction clear and separate


Recursion
---------

Recursion is the ability for a subroutine to *call itself*. A recursive routine
is defined in terms of itself.

  * Each time a routine is called, the return address, register contents and
    any local variables are stored in the **stack**.
  * The location of the stack for one routine call is called the **stack
    frame**.
  * When a routine ends, the stack frame is removed (i.e. popped) from the
    stack.
  * If too many recursive calls are made, the stack space may run out --
    resulting in the classic **stack overflow** error.


Lists & pointers
----------------

  * **Linear list:** elements stored contiguously (next to each other)
  * **Linked list:** each element (node) holds a pointer which points to the
                     memory address of the next element in the list
  * **Pointer:** variable containing a memory address (the data residing at the
                 address can be accessed via *dereferencing*)


Heap & memory
-------------

  * **Heap:** the memory locations available to *application programs* for
              dynamic allocation
  * **Dynamic allocation:** means that memory is only allocated as required (at
                            run time)
  * **Memory leakage:** calls to allocate more memory are made, but memory
                        locations no longer required *are not released*.
                        Eventually, no memory is left in the heap.


Stacks & queues
---------------

  * **Abstract data type:** one whose properties are specified independently of
                            any programming language
  * **Static data structure:** fixed size, can waste storage if number of data
    items stored is less than the structure size
  * **Dynamic data structure:** dynamic size, require memory to store a pointer
    to next item

**Stacks** and **queues** are both abstract data types. You may also hear them
called **dynamic data structures**. I'll skim over how each one works & common
usages.


### Stack

  * **LIFO:** -- push/pop elements onto/from the top
  * Stores return address, variables and register contents whenever a function
    call is made (mentioned in the recursion section)
  * e.g. used by compilers when translating a high-level language into
    assignment statements


### Queue

  * **FIFO:** add to back, remove from front

  * **Priority queue:** each element has an associated priority, and when an
                        element is removed, the one with the highest priority is
                        chosen

Priority queues are similar to linked lists. They are commonly used as event
queues in simulations (see [Simulation](#simulation)).


Graphs
------

  * **Degree of a vertex:** number of neighbours (connected vertices) it has

A graph is a *data structure* we use to represent complex relationships in a
simpler way, using **abstraction** (removing data unnecessary for the problem).
Think about the London Underground map: stations represent vertices, lines
represent edges. Unnecessary real-life features such as small turns or accurate
distances *don't matter* for the user, so they are not shown on the graph.

To process a graph using a program, we must represent the data in a different
way. The first way we will use is called an **adjacency matrix**.


### Adjacency matrix

Basically it's a matrix showing the weights of edges between vertices. It's
gonna look like the matrix equivalent of a graph from OCR D1, except if there
are no weights on the graph, you use 1 for a connection and 0 if there isn't
one.


Trees
-----

### Binary trees

  * **Root node:** the top node (depth = 1, should be only one node on this
    level)
  * **Leaf node:** a node with no children (i.e. at the bottom of the tree).
  * **Internal node:** a node with both a parent and children (i.e. middle of
    the tree)

Some ways to traverse trees:

  * **Depth-first**
  * **Post-order**


Searching and sorting
---------------------

### Binary search

Simply, keep splitting a list in half until you find the element you're looking
for, or you have no more list.

**N.B.:** when finding the middle element, always *floor it* i.e. the middle
element of a 4-strong list like [1, 2, 3, 4] is 2.

**Complexity:** O(log n) due to being linked with powers of 2.


<h2 id="simulation">Simulation</h2>

*Note: This topic has only showed up once in past papers. Don't worry much about
it.*

  * **Simulation:** the imitation of a process of a real system
  * **Model:** an abstraction of an entity in the real world or in the problem
               that enables an automated solution
  * **State history:** state descriptions at each of a chronological set of
    instants.

Obviously, if you want useful results, it's important that the simulation model
reflects the core characteristics of the actual system.


### Simulation methodology

  1. **Problem formation:** State objectives & result criteria
  2. **Observation of the real system:**
      * identify inputs/outputs
      * decide on required data and gathering method
      * know how the system can be formed from subsystems
      * identify TODO
  3. **Model formulation:** TODO
  4. **Model validation:** Stuff like checking logic, **hand simulation**, TODO
  5. **Program formulation:** TODO
  6. **Program validation:** Use old data from previous systems and check
     results from simulation matches with older values.
  7. **Experiment design & results analysis:** TODO
