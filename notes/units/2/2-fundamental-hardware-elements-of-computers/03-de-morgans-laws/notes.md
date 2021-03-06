De Morgan's laws
----------------

De Morgan's laws state that, in boolean algebra:

  > "not (A and B)" is the same as "(not A) or (not B)"

and

  > "not (A or B)" is the same as "(not A) and (not B)"

The ways you're probably used to seeing it are:

$$\overline{A \cdot B} \equiv \overline{A} + \overline{B}$$

and

$$\overline{A + B} \equiv \overline{A} \cdot \overline{B}$$

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
