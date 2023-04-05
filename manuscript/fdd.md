# FDD - Failure Driven Design
Failure Driven Design
Paul Tarvydas, April 2021

---
Failure is the Best Way to Learn

---
Two Ways of Looking at Development
1.  It's going succeed
2.  It's going to fail

---
Outlook Determines Workflow
-   How do you write software if you are convinced that it will work the first time?
-   How do you write software if you are convinced that it will fail?

---
FDD vs Regular Design
-   FDD
	-   How to build-in easy recovery from changes (failures)
	-   meta-design
-   Regular Design
	-   How to build it so that it works first time, ignoring possibility of changes / failure
	-   A to B design, straight ahead
---
Assuming Success
-   Waterfall workflow 
	-   one-way, one direction (e.g. top to bottom)
	-   no plan to iterate
	-   failure comes as a "surprise"
		-   hard to recover from failure
---
Waterfall
-   antithesis of FDD == overconfidence == Waterfall design
-   Waterfall: one direction: design->implement
-   Waterfall: assumed that the design will succeed the first time
-   Waterfall: early attempts / requirements fail to completely solve the problem, but, no recovery from failure is built into the workflow

---
Mythical Man Month
-   Fred Brooks - fail, fail, succeed
---
Assuming Failure
-   how to fail fast?
-   how to recover quickly?
---
Failure
-   The first several attempts at solving a problem will fail.
---
Failure vs. Success
-   Development:
-   When software works, we "abandon" it (ship it)
-   When software fails, we continue working on it
-   Most of the time, we work on failing / failed code
---
What Can Fail?
-   Requirements
-   Design
-   Architecture
-   Engineering
-   Implementation
-   Testability
	-   for example: testability can drive a change back into Architecture, etc.
---
Learn by Failing
-   Failure is said to be the best way to learn.
-   What do we need to learn?
	-   what the requirements are
	-   all aspects of the problem space (the _gotchas_)
---
FDD - Strategies to Make Failure Less Painful / Bothersome
-   iteration
-   recursion / divide-and-conquer
-   automation - rearrange, then push a button to rebuild everything
-   layering design (see "Recursive Design, Iterative Design By Example (2), section "Bug 2" and section "Layering Solutions")
	-   [https://guitarvydas.github.io/2021/04/20/Recursive-Design,-Iterative-Design-By-Example-(2).html](https://guitarvydas.github.io/2021/04/20/Recursive-Design,-Iterative-Design-By-Example-(2).html)
-   indirection
-   create a notation, SCN (low-cost)
	-   punt to toolbox languages
	-   punt to foreign functions (DI & Details Kill)
-   asking Why?
---
FDD
-   Failure-Driven Development
-   most of the time, the requirements will change
-   most of the time, a design will have flaws in it
-   most of the time, the implementation will need to be debugged and need repairs
-   the number of failures >> the number of successes
-   plan for failure, since failure happens more often than success
---
FDD How?
-   fail fast
-   build in backtracking => automation
-   look to compiler technologies, transpilation
-   Notations, not Languages nor DSLs
---
Notations, Not Languages
-   _Notation_ is a lightweight DSL
-   Programming Language: heavyweight, high cost to build
-   DSL: heavyweight, high cost to build
-   Specialize Notation to Problem Space _only_
	-   avoid generalizing
-   YAGNI - You Aren't Going to Need It
---
Fail Fast
-   divide problem, choose greatest risk, greatest unknown
-   experiment with / implement unknown
-   if unknown becomes known, defer it and choose next greatest risk (which is, now, the greatest risk)
-   if unknown is "impossible", then fail and backtrack
	-   redefine the problem / solution
-   Testing cannot prove that a device works, but testing can prove that a device does not meet its specifications
---
Scientific Method is a Fail Fast Methodology
-   A _scientific theory_ is one which is _falsifiable_
-   one can't prove a theory to be correct - 1 data point can only _support_ a theory, but cannot prove it
-   one can only disprove a theory - 1 data point can kill a theory
---
FDD How? Backtracking
-   script everything, push a button to rebuild
-   when a design fails, 
	-   repair requirements
	-   repair the design
	-   re-generate
	-   try again
---
FDD How? Compiler Technology
-   compilers pioneered automated transforms
-   compilers pioneered portability
---
FDD How?
-   don't write code
-   write code that generates code
---
Failure : Automation
-   If you assume that you will fail, you are encouraged to use automation and backtracking
-   FDD workflow is: repair, push button and regenerate, try again
-   Waterfall workflow is: confidence that it will work, design, then implement
	-   waterfall: no assumption that attempts will fail most of the time,
	-   success is assumed
---
Automation : Factbases
-   To automate, use compiler technology
-   MOV R1,R0 is a triple
-   everything is a triple => easier to automate
-   RTL, OCG, portability ... <= normalization
-   Projectional Editing <= normalization
---
What is the LCD for Automation?
-   Q: What is the LCD - Lowest Common Denominator?
-   A: triples
-   triple = _relation(subject,object)_
-   curried function is _relation(subject)_, later applied to _object_
	-   i.e. double X single => triple
---
Manual vs. Automated
-   Manual work resists change.

-   The time spent is not recoverable.

-   Automated work accommodates change.
---
Are You Ever Finished?
-   No, but you reach a point where a product can be shipped
-   analogy: songwriting - 
	-   songwriter continuously tinkers with a song
	-   but, making a recording draws a line
	-   "Aqualung" live is, now, almost unrecognizable (jazzy beginning) 
		-   audience member yelled "play Aqualung" during the new intro
	-   songs continue to evolve
---
DI
-   Design Intent
-   [https://guitarvydas.github.io/2021/04/11/DI.html](https://guitarvydas.github.io/2021/04/11/DI.html)
-   [https://guitarvydas.github.io/2020/12/09/DI-Design-Intent.html](https://guitarvydas.github.io/2020/12/09/DI-Design-Intent.html)
---
Recursive Design
-   [https://guitarvydas.github.io/2020/12/09/Divide-and-Conquer-is-Recursive-Design.html](https://guitarvydas.github.io/2020/12/09/Divide-and-Conquer-is-Recursive-Design.html)
-   [https://guitarvydas.github.io/2021/04/12/Recursive-Iterative-Design-By-Example.html](https://guitarvydas.github.io/2021/04/12/Recursive-Iterative-Design-By-Example.html)
-   [https://guitarvydas.github.io/2021/04/20/Recursive-Design,-Iterative-Design-By-Example-(2).html](https://guitarvydas.github.io/2021/04/20/Recursive-Design,-Iterative-Design-By-Example-(2).html)
-   [https://guitarvydas.github.io/2021/03/18/Divide-and-Conquer-in-PLs.html](https://guitarvydas.github.io/2021/03/18/Divide-and-Conquer-in-PLs.html)
-   [https://guitarvydas.github.io/2021/03/06/Divide-and-Conquer-YAGNI.html](https://guitarvydas.github.io/2021/03/06/Divide-and-Conquer-YAGNI.html)
-   [https://guitarvydas.github.io/2020/12/09/Divide-and-Conquer.html](https://guitarvydas.github.io/2020/12/09/Divide-and-Conquer.html)
---
Factbases
-   [https://guitarvydas.github.io/2021/01/17/Factbases.html](https://guitarvydas.github.io/2021/01/17/Factbases.html)
-   [https://guitarvydas.github.io/2021/03/16/Triples.html](https://guitarvydas.github.io/2021/03/16/Triples.html)
---
SCN - Notations
-   Solution Centric Notations
-   [https://guitarvydas.github.io/2021/04/10/SCN.html](https://guitarvydas.github.io/2021/04/10/SCN.html)
---
Indirection
-   [https://guitarvydas.github.io/2021/03/16/Indirect-Calls.html](https://guitarvydas.github.io/2021/03/16/Indirect-Calls.html)
---
Toolbox Languages
-   [https://guitarvydas.github.io/2021/03/16/Toolbox-Languages.html](https://guitarvydas.github.io/2021/03/16/Toolbox-Languages.html)
---
Appendix - Why?
-   I watched Daniel Pink's Masterclass
-   He suggests asking "why?" repetitively, some 5 times
	-  to understand the problem more deeply
---
Appendix - 5 Whys of...
-   5 Whys of Multiprocessing: [https://guitarvydas.github.io/2020/12/10/5-Whys-of-Multiprocessing.html](https://guitarvydas.github.io/2020/12/10/5-Whys-of-Multiprocessing.html)
-   5 Whys of Full Preemption: [https://guitarvydas.github.io/2020/12/10/5-Whys-of-Full-Preemption.html](https://guitarvydas.github.io/2020/12/10/5-Whys-of-Full-Preemption.html)
-   5 Whys of Software Components: [https://guitarvydas.github.io/2020/12/10/5-Whys-of-Software-Components.html](https://guitarvydas.github.io/2020/12/10/5-Whys-of-Software-Components.html)
---
Appendix - Incremental Learning
-   A debugger can be used to observe the operation of someone else's code (or your own code).
	-   Stepping through code and interactively examining data structures is one way to understand the intended architecture.
	-   Fixing other peoples' mistakes can force you to think deeply about the code and data structure details.  Incrementally, not in one big gulp.
---
Appendix - Details Kill
-   [https://guitarvydas.github.io/2021/03/17/Details-Kill.html](https://guitarvydas.github.io/2021/03/17/Details-Kill.html)
-   elide details
	-   don't delete details, suppress them
	-   KISS
		-   simplicity is the "lack of nuance"
		-   complexity is the inclusion of too many details (in any one layer)
