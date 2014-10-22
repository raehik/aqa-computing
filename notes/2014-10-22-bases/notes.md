Decimal -> Base n

    Binary:

    1532.

    1532    508     508     252     124     60      28  12  4   0   0
    1024    512     256     128     64      32      16  8   4   2   1
    1       0       1       1       1       1       1   1   1   0   0

    (only ever 1 or 0 2^ns, obv.)

    = 10111111100



    Hex:

    1532    252     12
    256     16      1
    5       F       C

    5 256s in 1532, 252 left over (5 = 5)
    15 16s in 252, 12 left over (15 = F)
    12 1s in 12, 0 left over (12 = C)

    = 0x5FC



Binary -> Hex:

    10001011.

    1       0       0       0       1       0       1       1
    8       0       0       0   |   8       0       2       1
    8                           |   B

    (split up into nibbles :3)

    = 0x8B
