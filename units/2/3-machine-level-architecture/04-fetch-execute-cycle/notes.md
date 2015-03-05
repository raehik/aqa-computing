Fetch-Execute cycle
-------------------

1. Instruction time / I-time
  1. **Fetch:** Next instruction fetched from address currently in PC and
                stored in IR. Finally, increment PC.
    1. Fetch address <- PC
    2. Store address -> IR
    3. Increment PC
  2. **Decode:** 

2. 
2. Load PC -> MAR
3. Increment PC
4. Execute instruction

1. PC -> MAR to determine location of next instruction

  1. CU **fetches** instruction from memory & puts in IR
  2. CU **decodes** instruction & **directs** that the necessary data is
     **moved** from memory -> ALU.
     * e.g. if instruction is reg. 1 + reg. 2, then reg. 1 & 2 must be
       fetched
2. ALU **performs** an operation
3. ALU **stores** result in a register

![Fetch-execute
cycle](http://upload.wikimedia.org/wikipedia/commons/5/52/Comp_fetch_execute_cycle.png)


Register notation
-----------------

The following is adapted from the [AQA Computing
Wikibook][wikibook-page].

[wikibook-page]: http://en.wikibooks.org/wiki/A-level_Computing/AQA/Computer_Components,_The_Stored_Program_Concept_and_the_Internet/Machine_Level_Architecture/The_Fetch%E2%80%93Execute_cycle_and_the_role_of_registers_within_it

  1. \\(MAR \gets [PC]\\)
  2. \\(MBR \gets [Memory]\_{MAR\ address}\\) and, simultaneously, \\(PC \gets [PC]+1\\)
  3. \\(CIR \gets [MBR]\\)
  4. \\([CIR]\\) decoded then executed
