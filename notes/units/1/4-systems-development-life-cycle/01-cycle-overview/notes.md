Introduction
------------

*(Note: The [Wikibook][] for this course has great resources on the
systems development life cycle.)*

[Wikibook]: https://en.wikibooks.org/wiki/A-level_Computing/AQA/Problem_Solving,_Programming,_Data_Representation_and_Practical_Exercise/Systems_Development_Life_Cycle/The_cycle

A **systems development life cycle** (SDLC in short) is a model of the
stages that software in development may go through. There are multiple
SDLC models, such as [agile software development][agile] or the
[waterfall model][waterfall]. In AQA AS Computing you learn about one
basic model, shown in the diagram below.

[agile]: https://en.wikipedia.org/wiki/Agile_software_development
[waterfall]: https://en.wikipedia.org/wiki/Waterfall_model

![AQA systems dev life cycle diagram](https://upload.wikimedia.org/wikipedia/commons/a/aa/CPT-SystemLifeSycle.svg)

In text, this is how it progresses:

  1. Analysis
  2. Design
  3. Implementation
  4. Testing
  5. Evaluation

Then it cycles back round to analysis, and so on.

Note that this is a **cycle**. Development is an *iterative process*,
and many of the separate phases are iterative themselves (I remember
Code Complete continually saying design is an iterative process).


Phases
------

### Analysis

The **analysis** phase aims to understand why the new system is
*required*, and what exactly the client really wants the system to
*do*. Common reasons for a new system include:

  * Scale changes in the organisation (i.e. new department)
  * Outdated technologies

This phase is important because if the problem is not specified well
enough, you might not be *solving the correct problem*.

The ZigZag course companion (labelled as Student Notes) actually uses
terms which are pretty familiar to me. It says that before a project is
officially 'commenced', a **problem definition** and some specific
**requirements** must be cranked out. See Code Complete for what those
might include or mean.


### Design

The **design** phase involves producing a detailed plan, enough that
any decent programmer could understand how to implement the system. Some
things you may think about are:

  * Data file format
  * User interface

This phase is important because it helps *spot mistakes early in
development*. Fixing mistakes in the design phase is *much* cheaper than
fixing them during implementation (backed by many studies).

One method of designing is **prototyping**, where a working *model* is
created to show the client how the system is planned to turn out.

Note that designing the interface may involve many considerations, such
as *"who is using the system?"* and *"How should the user be able to use
the system?"*


### Implementation

The **implementation** phase is composed of not only 'making' the
system, but also many other just-as-important tasks. These are the main
points for implementation:

  * Programming software / Making hardware
  * Installing the system
  * Training users
  * Writing system documentation

This phase is important because it's where the system is *actively
created*. Kind of an obvious reason.


### Testing

The **testing** phase is important because it is where a decision is
made on *whether the system matches the user's* ***requirements*** and
works in practice. You need to know about a multitude of testing
methods:

  * Black box testing
    * Enter input, see if the output is the desired result. Do not
      consider the internals -- imagine that they are a black box.
  * White box testing
    * Conduct tests which consider all possible 'paths' in the
      program/algorithm and hope that the output is the desired result.
  * Dry-run testing
    * Work through the algorithm manually

When working with algorithms in dry-run testing you may use a **trace
table**. This is simply a table of variable values at different states
(just like how you set out an unknown algorithm question in Maths D1).

Furthermore, systems should be tested using different types of data:

  * Normal data
  * Normal boundary data
    * Normal data which is on the boundary of valid data.
  * Incorrect data
    * Data with the correct format/type but which is invalid.
  * Invalid data
    * Wrong type data e.g. string in a numeric field.

A good system should deal with all these data reliably and properly.


### Evaluation

In the **evaluation** phase, the current system (not necessarily
'finished') is compared to the original **requirements** and the client
is asked for feedback. Other things that may be looked at in evaluating
a system include:

  * Cost of maintenance
  * Cost of system compared to predicted
  * Time of completion compared to predicted

This phase is important because it is where *potential problems or
improvements* may be uncovered. Some cases may call for another cycle of
the SDLC. Other issues may simply require some small changes to a part
of the system: this is called **software maintenance**. *(I believe that
becomes more important in A2.)*


Other reading
-------------

For further discussion of the stages of a software development project
and lots of things more, I recommend Code Complete by Steve McConnell
(especially the first few chapters).
