![Abstract processor component
diagram](http://www.build-your-own-computer.net/image-files/cpu-diagram.jpg)

![Processor diagram with
buses](http://www.lrr.in.tum.de/~jasmin/neumann.gif)


Structure of a processor
------------------------

### Control Unit (CU)

Coordinates all components within the CPU.

Decodes instruction in CIR & directs the moving of necessary data to the
ALU.


### Arithmetic & Logic Unit (ALU)

Performs arithmetic (ADD, SUB, MUL) & logical (AND, OR, NOT) operations
on the data it receives.

Rembemer that it's arithmetic **and** logic.


### Registers

Registers are what allows a CPU to move information around to different
components *very* quickly. Rather than being in a separate module (i.e.
RAM), registers are directly inside the CPU housing and so are orders of
magnitude faster.

The two types of register I'll talk about are **general-purpose** and
**special-purpose**.


#### General-purpose registers

'E' before the register name means it's a 32-bit register.

Not sure what the prefix is for 64-bit registers.

  * AX (Accumulator register) TODO
  * BX (Base register) TODO
  * CX (Counter register) TODO
  * DX (Data register) TODO


#### Special-purpose registers

  * Instruction Register (IR) -- Temporary storage for current
    instruction.
  * Memory Data/Buffer Register (MDR/MBR) -- Two-way register that holds
    data fetched from memory (waiting for CPU) or data waiting to be
    stored (waiting for memory).
  * Memory Address register (MAR) -- Holds address in main memory that
    is currently being read/written.
  * Program Counter (PC) -- Incrementing counter that keeps track of the
    memory address of the instruction to be executed next.
