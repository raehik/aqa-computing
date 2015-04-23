Common questions
================

These are common questions taken from the COMP2 papers. I used the
markscheme for reference, so my answers here may differ from my notes. I
try to keep my notes as factually accurate as I can be bothered, while
in these questions I'm showing you what AQA want you to write.


Define the principles of operation of [object].
-----------------------------------------------

I have no idea how to answer these questions. Some devices which have
come up are:

  * a camera (? what type? and which year?)
  * a bar code reader *(AQA Jun14)* -- I did OK at that question, IMO


Describe the fetch-execute cycle.
---------------------------------

### Long-answer question

The **contents of the PC** are transferred to the **MAR** via the
**address bus**.  Next, the **contents of the addressed memory
location** are loaded into the **MBR**. They are transferred over the
**data bus**. The **PC is incremented** ***simultaneously***. After
that, the **contents of the MBR** are transferred to the **CIR**.

The **control unit** (CU) **decodes** the instruction in the CIR and
splits it into an **opcode and operands**. The opcode tells the
processor the type of instruction it is. If required, **data is
fetched**. The instruction is then **executed**. This may involve
transferring data to the arithmetic and logic unit (ALU) and having it
perform an arithetic or logical operation on the data. After the
instruction is executed, the result is stored in the **accumulator** and
the **SR** is updated.


### Register transfer notation

  1. MAR <-- [PC]
  2. PC <-- [PC] + 1 && MBR <-- [Memory]<sub>addressed</sub>
  3. CIR <-- [MBR]
  4. Decode instruction
  5. Execute instruction
