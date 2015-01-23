Boolean algebra
---------------

Boolean expressions are formed similarly to normal algebraic
expressions,  but operators mean different things and everything is
either *true* or *false*.

The textbook uses the term **Boolean equation** and defines it as an
equation which expresses a Boolean output (Q) in terms of Boolean inputs
and has Boolean functions such as AND and NOT applied to it. So
literally, *it's just a normal equation with different syntax*.


### Syntax

  - Variables are CAPITAL LETTERS OF THE ALPHABET. Because Boolean has
    to be **LOUD**.
  - The only values in a Boolean expression are `0` and `1`,
    representing `false` and `true` respectively.



OR: `+`

e.g. X + Y = Q

means X OR Y = Q

so Q will be 1 if either X or Y are 1.

AND: `.`

e.g. X . Y = Q

means X AND Y = Q

so Q will be 1 if both X and Y are 1.


### De Morgan's laws

De Morgan's laws state that, in boolean algebra:

  > "not (A and B)" is the same as "(not A) or (not B)"

and

  > "not (A or B)" is the same as "(not A) and (not B)"

In long English:

  - The negation of a conjunction is the disjunction of the negations.
  - The negation of a disjunction is the conjunction of the negations.

In [formal language](!Wikipedia), these rules can be expressed as
follows:

$$\neg(P \land Q)\iff(\neg P) \lor (\neg Q)$$

and

$$\neg(P \lor Q)\iff(\neg P) \land (\neg Q)$$

where:

  - ¬ is the negation operator (NOT)
  - \land is the conjunction operator (AND)
  - \lor is the disjunction operator (OR)
  - ⇔ is a metalogical symbol meaning "can be replaced in a logical
    proof with"


#### Why?
