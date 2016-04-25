Real numbers
------------

### Calculating the denary representation of a floating point number

Simple: multiply the mantissa by 2^(exponent). Just like scientific notation.
Remember about two's complement!

**Note:** The exponent is stored in two's complement as well! So if it starts
with 1, then you flip each bit and call it -x. Naturally then you end up
multiplying by 2^(-x), which shifts things left instead of right.


#### Example

  > 0.100100100'000100

*(Note: I added the apostrophe to identify where the mantissa ends and the
exponent begins.)*

Mantissa: 0.100100100  
Exponent: 000100 (= 4 in base 10)

Remember that in base 2, multiplying by a power of 2 just shifts all the digits
to the left or right. So since we're multiplying by 2^(4), simply shift
everything to the left of the binary point.

value is 0.100100100 * 000100 = 1001.001

Then you use your normal method to convert it to denary:

```text
1   0   0   1 . 0   0   1
8   4   2   1 . 1/2 1/4 1/8

8 + 1 + 1/8 = 9.125
```

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
