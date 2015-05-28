What are library programs for?
------------------------------


Why is writing assembly code better than writing in machine code?
-----------------------------------------------------------------

  * Easier for people to read because of simple mnemonics
  * Ability to make comments


Explain how the (even |odd )?parity system works. Include a description of the roles of the sending device and receiving device during transmission.
----------------------------------------------------------------------------------------------------------------------------------------------------


Why do we often use hexademical to display binary numbers/bit patterns?
-----------------------------------------------------------------------

  * Easier for people to read
  * More compact when displayed


Why are vectors better than bitmaps?
------------------------------------

  * Quality does not deteriorate when resized
  * Usually smaller files


How many different denary numbers can be represented using x-bit binary?
------------------------------------------------------------------------

The answer here is **2^x** . However, they can ask a similar-sounding
question with a different answer, which follows.


What is the largest denary number that can be represented using x-bit binary?
-----------------------------------------------------------------------------

The answer to this is **2^x - 1**. That's because e.g. 8-bit binary goes
from 0 to 255 -- that's 256 numbers overall, but the largest number is
255 = 2^8 - 1.


What is the largest positive/negative denary number that can be represented using x-bit two's complement binary?
----------------------------------------------------------------------------------------------------------------

Harder question.

The range of 8-bit two's complement binary is `-(2^8) -> (2^8) - 1`.
That's right, -128 to 127. So there's still 256 different numbers. In
summary:

  * Largest +ve: 127
  * Largest -ve: -128
  * Range: -128 to 127
  * How many different numbers: 256


State an advantage of Hamming code over a single parity bit.
------------------------------------------------------------

  * Single errors can be corrected
  * Up to two errors can be detected
