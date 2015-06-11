1. A yes/no question, e.g. "Is 2 + 2 equal to 5?"

2. * a) **1**
   * b) = 1 AND 1
        = **1**
   * c) = 1 XOR (0 OR 0)
        = 1 XOR 0
        = **1**

3. * a)
       * i) 128 + 64 = 192
            + 8 + 4 = 204
            = **11001100**
       * ii) 16 in 204
            = **12**
            12 left
            = **CC**
   * b)
       * i) 1    1   0   0   0   1   1   1
            128  64  32  16  8   4   2   1
            128 + 64 + 4 + 2 + 1
            = **199**
       * ii) 1   1   0   0       0   1   1   1
             8   4   2   1       8   4   2   1
             8 + 4                   4 + 2 + 1
             12  7
             = **C7**
   * c)
       * i) E    7
            16   1
            14 * 16 + 7 * 1
            = **231**
       * ii) E               7
             14              7
             8 + 4 + 2 + 0   0 + 4 + 2 + 1
             1110            0111
             = **11100111**

4. * a) Digital signals have a definite value (i.e. 1 or 0) while
        analogue signals can take any value in a certain range.
   * b) *"recording them to a computer"...? assumed it means from a CD*
        Because CDs store data in analogue format.
   * c) `.wav`:  Uncompressed binary data representing a waveform (which
                 can be played back).  
        `.midi`: Instructions to generate music using pre-recorded
                 samples stored on the playback device (e.g. a
                 soundfont on a computer).  
         `.mp3`: Proprietary MP3 format, compressed to a lossy format in
                 order to remove sounds not heard by the human ear.

5. * a) Displaying data as it is downloaded.
   * b) Lossless sound compression (e.g. FLAC) keeps all of the
        information from original source, while lossy compression
        removes frequencies outside of the human hearing range. Because
        of this, files compressed losslessly are almost always larger;
        however they can be better quality (depending on the bitrate of
        the lossy-compressed file). In almost all cases, lossy
        compression is used for streaming music.
