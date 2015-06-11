Representing sound
------------------

Sound is transmitted via *waves*. To represent a sound in a computer,
we need to convert it to a digital format.

A microphone translates sound waves into a changing voltage -- an
**analogue** signal. We can convert this into a **digital** format to
store/edit/play using a computer. When you want to play a sound, the
opposite happens: the digital representation is converted to an analog
one which is played through speakers. In brief:

    ADC -> Computer -> DAC

*(Obviously the last step only happens if you're playing the sound.*

![A-D -> D-A conversion diagram](http://upload.wikimedia.org/wikipedia/commons/5/5a/Conversion_AD_DA.png)


### Analogue-to-digital conversion

  * Sampling rate (CD: 48kHz)
  * Bit rate (CD: 16-bit)


### Digital-to-analogue conversion

Original wave is approximated using the digital data recorded about it.
Depending on the sampling rate and bit rate, it may differ significantly
from the original wave.


Signals
-------

To encode an analogue signal entirely, the minimum sampling rate you
must use is 2 times the **highest** frequency.
