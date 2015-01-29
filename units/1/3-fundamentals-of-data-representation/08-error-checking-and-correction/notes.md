Error checking
--------------

Error checking is an important thing because information can easily be
mangled during transmission, and sending something twice is a pretty
inefficient way of checking.


### Parity bits

In mathematics, the **parity** of a number describes whether it is
*even* or *odd*. For example, 2 and 4 have the same parity.

In computers, parity bits are added to bit codes to provide some simple
error detection. There are two different parity systems, **even parity**
and **odd parity**. 

  * **Even parity:** the parity of all bits (inc. parity bit) is made
    even
  * **Odd parity:** the parity of all bits (inc. parity bit) is made odd

There is also the question of where to place the bit in the code.
[Wikipedia states](!Wikipedia "Parity bit") that it is *"added to the
end of a string of binary code"*, which I agree makes most sense, but
***note well: AQA expect you to make the parity bit the MSB*** (i.e. put
it at the start of the code). This means normally (MSB first) it'll be
the leftmost bit. If you need to add a parity bit to an LSB first code,
then I'd put it at the right, where the MSB goes.

tl;dr AQA dumb as shit


### Hamming code

Can *detect* up to **two** errors and *correct* **one**.
