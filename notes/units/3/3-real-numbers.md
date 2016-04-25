Real numbers
------------

### Two's complement refresher

  1. Flip all the bits.
  2. **Add one to the result!**


### Calculating the denary representation of a floating point number

Simple: multiply the mantissa by 2^(exponent). Just like scientific notation.
Remember about two's complement!

  > mantissa * 2^(exponent)

**Note:** The exponent is stored in two's complement as well! So if it starts
with 1, then you flip each bit and call it -x.


#### Example

  > 0.100100100'000100

*(Note: I added the apostrophe to identify where the mantissa ends and the
exponent begins.)*

Mantissa: 0.100100100 = 1/2 + 1/16 + 1/128 = 73/128 in base 10
Exponent: 000100 = 4 in base 10

eqn.: 73/128 * 2^(4) = 73/8 = 9.125

So the denary representation of 0.100100100'000100 is 9.125.

*Note: An alternative method is to do the multiplication in binary. Just find
the exponent in denary, then you know how many places you'll need to shift each
bit (it's just like multiplying by 10 in base 10). But using this method, you'll
get the answer in binary. So maybe use whichever one is more relevant to the
question.*


### Normalisation

You know how when doing scientific notation, we make sure the main
number/mantissa is `1 =< x < 10`? That's called **normalising**. When talking
about floating-point, normalisation means **the mantissa should have a
significant first bit**. This means as few significant bits as possible are
lost. Meaning that:

  > Normalisation **maximises precision** for a given number of bits.

Basically this:

  * `0.010100'00011` is **NOT normalised**, because the first bit after the
    binary point is not 1.
  * `1.110100'00011` is **NOT normalised**, because it's a two's complement
    negative number with the same issue.
  * `0.110100'00011` and `1.010100'00011` would both be normalised two's
    complement binary numbers.


### Converting a denary number to its normalised binary floating point representation

  1. Find and **write down** (for method mark) the given number in binary.
     Forget about any leading zeroes -- that's the **normalisation**.
  2. The mantissa is the binary number starting from the left, and ending where
     you run out of mantissa storage bits. Yes: this means if there are 1s
     outside of the mantissa, they will be lost due to precision errors. It's
     the floating point trade-off. Those numbers can basically be thrown away --
     but keep them there for the next step.
  3. The exponent is the number of the places you need to shift the binary point
     to get it into a `0.1...` form (i.e. normalised floating point). For this
     step, you just need to where **where the binary point starts**, and **where
     it needs to end**. A lot of the time it'll be starting at the end (right)
     of the number, and ending at the start (left).


#### Example

Write the normalised floating point representation of the denary value 2944 in
the following boxes:

    [ ].[ ][ ][ ][ ][ ][ ]   [ ][ ][ ][ ][ ]
           mantissa             exponent

  1. 2944 = 2^11 + 2^9 + 2^8 + 2^7  
     so 2944 = 101110000000
  2. mantissa = 101110
  3. 101110000000. -> 0.101110  
     that makes 12  
     so exponent = 12 = 2^3 + 2^2 = 01100

Answer:

    [0].[1][0][1][1][1][0]   [0][1][1][0][0]
           mantissa             exponent

    0.101110 01100
