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


Describe the roles of each layer in the TCP/IP stack.
-----------------------------------------------------

Sending:

  1. **Application layer:** select appropriate protocol
  2. **Transport layer**: split data into packets, establish an
     end-to-end connection
  3. **Network layer**: adds source & destination IP addresses
  4. **Link layer**: physical interface with cabling, adds MAC addresses

Receiving:

  4. **Link layer**: strips MAC addresses
  3. **Network layer**: strips source & destination IP addresses
  2. **Transport layer**: reassembles data from packets
  1. **Application layer:** ? program uses data


What is packet switching?
-------------------------

Messages are split into packets, then numbered, then forwarded to their
destination, then reassembled.


HTML questions
--------------

There are a few different ones AQA like to ask. Usually they're quite
fun, but surprisingly easy to lose marks on.

Remember these things:

  * All headers are assumed to be larger than normal `<p>`s.
  * When a list finishes, there's a paragraph gap between it and the
    next element.
  * When a header is coming up, there's a bigger gap between the end of
    the last element and the header.
  * Lists are begun with `<ol>` (for an ordered list) or `<ul>` (for an
    unordered list), then elements are specified with `<li>`.


Which legislation does this act fall under?
-------------------------------------------

  * A computer administrator installs software onto their family's home
    computer which was licensed for use in their company.
    * Copyright, Designs & Patents Act
  * A goverment body asks the owner of a voice-communication program to
    hand over the logs belonging to a suspected criminal.
    * Regulation of Investigatory Powers Act
