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


### Hamming code

Can *detect* up to **two** errors and *correct* **one**.
