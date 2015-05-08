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
*required*, and what exactly the customer really wants the system to
*do*. Common reasons for a new system include:

  * Scale changes in the organisation (i.e. new department)
  * Outdated technologies

This phase is important because if the system is not specified well
enough, it might not solve the original problem. (? wording? check Code
Complete).

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

This phase is important because it helps spot mistakes *early in
development*. Fixing mistakes in the design phase is *much cheaper* than
fixing them during implementation (backed by many studies).

One method of designing is **prototyping**, where


For any further description on the stages of a software development
project, I recommend you read the first few chapters of Code Complete by
Steve McConnell.
