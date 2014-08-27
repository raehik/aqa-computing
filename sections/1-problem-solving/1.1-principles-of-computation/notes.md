Specification: *"Introduction to Principles of Computation: Focus on studying
                 the processes of computation and understanding why and where
                 they are important in Computing."*


Abstraction
-----------

**Abstraction** is "the process of separating ideas from specific instances of
those ideas at work" ([Wikipedia](http://en.wikipedia.org/wiki/Abstraction_%28computer_science%29)).
The aim of **abstraction** is to separate out different 'layers' of the 'thing'
in question. In computer science, that means hiding the details of
implementation where they are irrelevant to the current problem.

High-level languages are further abstracted than low-level languages. In a
low-level language such as assembly, to add 2 numbers you would have to shift a
bunch of binary registers around, maybe *"adding the binary complement of the
contents of one register to another"*, and other such really confusing things.

In contrast, a high-level language lets you add numbers in a way
similar/identical to how humans think about it (i.e. number + number). We don't
think about binary and registers when normally summing numbers -- a high-level
language includes **abstractions** to help programmers (and anyone reading the
code). It also forces programmers to *"constantly repeat fairly common tasks
every time a similar operation is needed"* ([Wikipedia](http://en.wikipedia.org/wiki/Abstraction_%28computer_science%29#Control_abstraction)).

Functions enable programmers to make their own abstractions. Getter and setter
methods are some simple OO examples. They simplify the interface into just
calling one simple function. Usually the implementation is just as simple, but
it could be that maybe that class is linked to a database, so it actually does
clever database mangling in those functions. However, while you aren't working
on that, you don't need to keep it in mind.

A nice, easy-to-understand example is in the functions exposed to a programmer
in the standard libraries of programming languages. For example, C does not
automatically manage memory, forcing the programmer to concern themselves with
making sure the program doesn't overflow or asplode or whatever.

C++ on the other hand *automatically* manages memory for you -- the issue is
abstracted away.



For further reading, check this out: http://en.wikipedia.org/wiki/Abstraction_%28computer_science%29#Control_abstraction


Algorithms
----------

**Algorithm:** "a description, independent of any programming language, of a
               process that achieves some task"


Definitions
-----------

**Computation:** the process of determining something (e.g. the tax a company
                 has to pay) "by mathematical, logical or interactive methods"

**Computability:** whether something can be computed

**Computing:** the study of natural & artificial information processes (e.g.
               natural encoding of information in DNA)
