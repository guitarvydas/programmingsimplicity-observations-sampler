
# Programming Is Not Coding
## An Abbreviated History of Programming Languages.



The ground truth is *programming*, not *coding*.

The goal of programming is to control a machine.

A secondary goal of programming is to make it possible to change a program easily, or, to steal parts of a program and use them in other programs.

A tertiary goal of programming is to buff and polish specific notations, like textual programming languages.

Buffing and polishing code notations is a sub-goal of programming, and is, therefore, not as important as the main goal: controlling a machine. Coding - writing textual scripts in a programming language - is but a subset of the main goal.

## What is the point of programming?
To control a machine.

To accurately break down an action in steps so small that even a machine can perform the steps.

Current electronic machines provide us with a set of steps called "opcodes".

## Early Machines

Early machines were mechanical.

Early machines used gears and pulleys.

## High Level Electronic Machines

Electronic machines - called *computers* - are machines where the gears and pulleys are replaced by electronics.


## Early Programming of Computers


### Tools
The earliest tools for programming computers were soldering Irons.

### IDEs
The earliest IDEs - Integrated Development Environments - for programming computers were soldering stations which included a desk, a static mat, soldering iron, solder, resin and optionally, amenities like magnifying glasses, desk lamps, etc.

### Process
Changing a program, consisted of unsoldering wires and connecting them elsewhere.

### Drawbacks
The primitive programming tools and IDE were slow, but, orders of magnitude faster than changing the behaviour of machines by pulling gears and replacing them with other gears.

Other drawbacks included blisters on fingers.  Recently soldered nodes would remain hot for a while and would create blisters if touched too soon.


##  Toggle Switches (Advanced Programming)


Toggle switches were used to replace soldering of wires.[^jz]

{width: 40%}
![On-Off_Switch.jpg| 130](resources/On-Off_Switch.jpg)

[^jz]:Jason Zack at en.wikipedia, CC BY-SA 2.5 <https://creativecommons.org/licenses/by-sa/2.5>, via Wikimedia Commons

Revelation: toggle switches had 2 states "OFF" and "ON".

Revelation: arranging toggle switches in sequential and parallel combinations produced physical equivalents of Boolean Logic (AND and OR functionality).

![Boolean.svg](resources/Boolean.svg)


## Breadboards (Advanced Programming)


Breadboards were used to allow moving and reconnecting wires without the need to solder.[^pengxh]

{width: "70%"}
![Breadboard_in_our_experiment.jpg](resources/Breadboard_in_our_experiment.jpg)


[^pengxh]: https://commons.wikimedia.org/wiki/File:Breadboard_in_our_experiment.jpg

This was faster than programming by soldering, but, it was more expensive.


## Miniaturization (Super Advanced Programming)


Switches were miniaturized down to the size of dust particles.[^zephyris]

{width: "60%"}
![Microchips.jpg](resources/Microchips.jpg)


[^zephyris]: https://commons.wikimedia.org/wiki/File:Microchips.jpg

### Drawback - Dust
The main drawback of miniaturization is that dust particles interfere with and block operation of switches when switches are that small.

The solution to this problem is to use clean rooms.  Clean rooms keep dust out when making very small switches.[^duk]

{width: "70%"}
![Clean_room.jpg](resources/Clean_room.jpg)

[^duk]: https://commons.wikimedia.org/wiki/File:Clean_room.jpg

### Drawback - \$\$\$
The drawback of using clean rooms and miniaturization is that they are very expensive.

Only a few startups could afford to pay for clean rooms, e.g. Motorola, Fairchild, National Semiconductor, Texas Instruments, Mitel, etc.


## HCI - Human Computer Interfaces - Keyboards and Displays


Problem #1: Ultra-small switches were too small for humans to interact with.

Problem #2: Ultra-small switches produced results that consisted of electrical impulses.  The human body does not have precision sensors for detecting tiny electrical impulses.


### Solution - Keyboards
Invent human-sized banks of switches - called QWERTY keyboards.[^mb]

{width: "60%"}
![Qwerty_Keyboard.JPG](resources/Qwerty_Keyboard.JPG)


[^mb]: https://commons.wikimedia.org/wiki/File:Qwerty_Keyboard.JPG

### Solution - Displays

Invent mapping from tiny electrical impulses to larger, human-sized displaying units.[^vt100]

{width: "60%"}
![Vt100-adventure.jpg](resources/Vt100-adventure.jpg)


[^vt100]:https://commons.wikimedia.org/wiki/File:Vt100-adventure.jpg
Printers (display results on paper).

Video screens.  Display results on thin films of phosophorous painted onto the backside of glass tubes.

LED screens. Display results on grids of tiny light bulbs, called light emitting diodes.

Teletypes: Combination of printer and QWERTY keyboard as single units.[^tty]

{width: "60%"}
![Teletype](resources/Teletype.jpg)

[^tty]:https://upload.wikimedia.org/wikipedia/commons/9/9e/Teletype.jpg

## Assembler (Ultra Advanced Programming)

Revelation: strings of bytes (e.g. ASCII) could be "parsed" to convert mnemonic words into binary opcodes.

For example, the string "RET" could be pattern-matched and replaced by the hex byte 0xC9.  This process mapped the 3-byte sequence
```
0x52
0x45
0x54
```

to the 1-byte sequence:
```
0xC9
```

Revelation: "RET" and "RETX" were parsed the same if a shortest match strategy was used.  The fix was to use a longest match strategy and make certain characters special. Whitespace was used to mark the end of any word. We call such special characters *delimiters*.  This led to the concept that whitespace is not allowed in mnemonic words. Note, that whitespace is used in prose, but is disallowed in programming languages.  A phrase in prose consists of several words separated by whitespace, whereas a phrase in a programming language is composed of syntactic constructs, like `if then else`, using words that contain no whitespace.

So, the 3-byte sequence, above, became a 4-byte sequence[^space]
```
0x52
0x45
0x54
0x20
```

[^space]:FYI - 0x20 is ASCII for "Space".  Practically, "Tab" - 0x09 - was used more often for cave-man-level pretty-printing purposes, but, still mapped to the same 1-byte sequence:
```
0xC9
```
It was discovered that *operands* of opcodes could, also, be parsed in similar ways. Comma was treated as a sub-class of delimiters:
```
MOV R0,(R7)+
```
Note that assembler used 2 very important, but subtle, tricks:
1. separation of operators and operands 
2. line-oriented

Both of these tricks make it easier to write programs that write programs. Tricks such as these led to invention of apps call 'compilers'.

### Separation of operators and operands
This is what is called "orthogonal code" and is espoused in Cordy's thesis[^ocg].

The "orthogonal code" technique is familiar to most programmers in the form of the *gcc* compiler.  An early form of orthogonal coding was Fraser/Davidson's Peephole technology[^rtl].

*GCC* uses orthogonal code techniques first, then optimizes the generated code using techniques that are described in the Dragon Book[^dragonbook] to generate assembler code that rivals assembler code written manually by human assembler programmers.  *GCC* is so good, that just about no-one bothers to write assembler any more.  At first, the concept of using compilers was thought to be too inefficient to be practical, and, was laughed at.  *GCC* changed such ideas.

[^dragonbook]: https://en.wikipedia.org/wiki/Principles_of_Compiler_Design (revised https://en.wikipedia.org/wiki/Compilers:_Principles,_Techniques,_and_Tools)

Unfortunately, the orthogonal programming technique has been ignored in the development of most programming languages.

Programming languages *could* be categorized as:
- operation phrases
- operands.

But, programming language designers fell under the spell of "one language to rule them all" and conflated control flow (operation phrases) with operands.

OOP (Object Oriented Programming) is a description of *operands* and could be used effectively in an orthogonal programming language.

## Line-Oriented Source Code
Another "trick" that helps in writing programs that write programs is the use of normalization.

One form of normalization is the idea of using lines of text to delimit programming phrases.

For example:
```
MOV R0,(R7)+
MOV R1,(R7)+
```
Is pattern-matched as 2 separate lines.  This "trick" makes pattern-matching easier.

"Easier" is a subjective term and a psychological trick.  If a technique is "easy enough", it will be used, and, become an idiom, and, will relieve the minds of smart people to think about more lofty problems.

Line-oriented assembly code was so "easy" to automate that it allowed programmers to invent higher-level programming languages, and, compilers, and, interpreters.

"Compilers" are simply "apps" directed at programmers.  Compilers stand on the shoulders of other apps-for-programmers, like assemblers.

#### UNIX Shell Pipelines - Line-Oriented
A shining example of line-oriented source code being used to create bigger and better programs is the UNIX shell and *pipelines*.

The UNIX shell hard-wired the notion of *lines of text* into its structure. 

A slate of tools emerged from this simple, subtle assumption.  Tools like *grep*, *REGEX*, *sed*, *awk*, etc.

Programming languages have evolved into using a *structured* syntax, where programming phrases (like `if then else`) cross line boundaries and are recursive.

The UNIX assumption of *everything is a line* is not good enough to handle most modern languages.  Lines are not recursive, where the syntax of textual programming languages is recursive.

### Aside - Tree-Oriented Source Code
A different approach to parsing is found in the language Lisp.

In Lisp, all source code is structured in the form of trees.  Lisp uses the concept of *list*s. Lisp source code is written in the form of *parse tree*s made from *list*s.  A unit of source - a Lisp function call - is a list (instead of a line) in a very rigid structure.  First, comes the name of the function, and the rest of the list (if any) contains the arguments to the function.  This format is often called Reverse Polish Notation[^rpn].

Like line-oriented assembler, this normalized structure makes it "easy" to write code that writes code.  Lisp notation led to the notion of *macros*[^cmacros].  Lisp macros are essentially code generators.

Unlike line-oriented assembler, the lisp list structure is recursive and can be used to write code that contains other code, i.e. functions that call functions that call functions, and so on.

[^cmacros]: Lisp macros are much more powerful that what is thought of as macros in other languages, like C.  Lisp macros are like plug-ins.  Lisp macros are functions that modify the operation of the Lisp compiler and interpreter.  Lisp macros are functions that run at compile-time.

[^rpn]: In fact, there is nothing "reverse" about this notation, it is a prefix notation.


##  High Level Languages (Super Ultra Advanced Programming)


The ease of writing programs that write programs led to the invention of bigger and better programming languages and compilers.

All programming languages devolve to assembler in the end, e.g. Haskell is converted into assembler by the Haskell compiler, Rust is converted into assembler by the Rust compiler, C++ is converted to assembler by the C++ compiler, and so on.

HLL - high level language - compilers are simply skins that make it more convenient for programmers to create assembler code.  The machine - the computer - doesn't care how the assembler is created, it simply executes instructions given to it.

Programmers, though, want helper apps to help them catch bugs more easily.

Programming languages as text were invented to alleviate programming problems.  The problems were perceive because of 1950's based biases and realities.  At the time, CPUs were expensive and rare and memory was expensive.  The majority of solutions to these problems included
- time-sharing (using 1 CPU to run many apps)
- GC - garbage collection - recycling memory
- mutation - recycling memory
- the call-stack was invented based on the notion that computers were simply bigger and better calculators ; this attitude implied that mathematics notation is "good enough" for programming computers
- prioritizing optimization of CPU effort over human-developer effort. In 2022++, CPUs are abundant and cheap, and memory is abundant and cheap, yet, programmers continue to use techniques developed to solve perceived problems of the 1950s. In 1950, we had Central Processing Units, in 2022++ we have Distributed electronic machines.
- Syntax checking - parsing - was invented to ensure that strings of non-whitespace characters were arranged in a sensible order that could be automatically transpiled into assembler (using compilers)
- Type checking was originally invented to optimize app speed on CPUs.  CPUs could handle certain kinds of numbers faster than other kinds of numbers.  For example, numbers that were integers in the range of -128..127 could fit in a byte, whereas floating point numbers needed to be represented using more bytes.  Byte-oriented integers were often handled directly by the CPU hardware, whereas floating point numbers could only be manipulated using libraries of code.  Calling library routines was much, much slower than using built-in CPU integer operations.

Once the menial tasks of low-level optimization were lifted from programmers' shoulders, it became possible to invent user-defined types and deeper type-checking of user-defined types.

Many "new" programming language designs add more developer debugging help in the form of incrementally better/deeper type-checking.

Various helper-apps for programmers were developed and are still being developed, such as
- syntax checking
- type checking
- IDEs

### ASCII
The original programming languages had only numbers because those could be conveniently expressed in mathematical notation.  For example, there was no concept of character strings.  Strings were treated simply as arrays of byte-sized numbers.  

ASCII (and EBCDIC) were invented to encode characters using small (byte) integer codes.  

Programming languages were defined using this restricted encoding.  For example, strings 
use the same character `"` to mark string beginnings and string ends.  This choice is contrary to any sensible encoding and contradicts the concept of quotes used in written natural languages.  This encoding makes it harder to parse strings and leads to epicycles involving multi-line strings and strings that contain quotes.

Since then, Unicode was invented.  Unicode greatly expanded the range of possible integer codes that could be used to represent characters, yet, we continue to design languages with work-causing, bloat-causing assumptions from the 1950s.  Programming languages could use different characters to demarcate beginnings and ends of strings, but, don't.

The drive to satisfy 1950s biases, such as ASCII, cut off development of alternate syntaxes, like diagrams and glyphs.  At one point the language APL was popular but required special keyboards and displays and required that all text be written in upper case.

Early languages, like FORTRAN and LISP cut out the use of lower case letters.  In part, this helped to "improve efficiency" of parsing (ASCII lower-case "a" differs from upper-case "A" by one bit, allowing succinct assembler tricks to be used).  In part, this was an admission that programming languages were not the same as natural languages.  It seemed reasonable to "program a computer" by using commands written only in upper case.  We continue to see repercussions of this decision even today.  File names are schizophrenic - Linux treats file name case as significant, whereas MacOS ignores case in file names.  This non-standardized disparity leads to surprises even in 2022++.

### Code Bloat
Code in 2022++ is orders-of-magnitude larger than code in early computers.

Functional programming is fundamentally small and beautiful.  Sector Lisp is a shining example of just how small programming languages can be made to be.  Sector Lisp is less than 512 bytes[sic]  in size.  Sector Lisp's Garbage Collector is 40 bytes[sic] long.

At first, one assumes that Sector Lisp's smallness is only due to assembler tricks and avoidance of the inherent complexity of programming problems.

This is but a hand-waving argument that is used to ignore much deeper issues.

#### Assembler Tricks
If Sector Lisp's smallness was due only to assembler tricks, we would expect to see the *gcc* effect.  Someone would have built compilers for most existing languages that produced orders-of-magnitude less assembler code than existing compilers are capable of producing.

This hasn't happened.

Programming languages produce bloated and large assembler code for reasons that go beyond simple application of assembler tricks.

#### Complexity
No concept is complicated.

Complication is only in the eyes of the beholders, i.e. complication is due to the use of unsuitable notations for expressing and solving specific problems.

When a  concept appears to be complicated, it is because an inappropriate notation is being used to describe the concept.  Apparent complication arises when too many concepts are force-fitted into a single notation.

The simple concept of *functional programming* has, at its core, a few fundamental principles:
- immutability
- stack-oriented evaluation
- function calls that are instantaneous
- lambdas as stack-based wrappers

##### Immutability - Referential Transparency
Immutability is vital to "referential transparency" in functional programming.

Referential transparency means being able to replace a unit of code, e.g. a function, by another unit of code.  In hardware, this is called "pin compatible".

Microsoft Word's *Find and Replace* function is a form of referential transparency.  It replaces one string of characters with another string of characters.  Some rules must be followed to allow this feature to work without creating surprises.  Referential Transparency applied to programming languages, also, requires a set of rules.  The rules are very similar to the rules for using *Find and Replace*.

There is more than one way to achieve Referential Transparency. 

The method used in hardware is to elide the insides of components, using black epoxy and plastic, and, to characterize components "from the outside" so that components can be compared and suitable substitutions can be made. 

In functional programming, Referential Transparency is achieved by decreeing that mutation cannot happen *anywhere* in the codebase.

Computers, though,  inherently support mutation. RAM (Random Access Memory) implies mutation.

So, there's a disconnect between functional programming and the reality of computer hardware.

##### Stack-Oriented Evaluation
Function calls with parameters always cause the parameters to be evaluated before the function is called.

The results of parameter evaluation are placed in temporary locations on the call-stack.

##### Instantaneous Function Calls
Pure functional notation works only if function call latency can be ignored.

In reality, CPUs implement function calls in hardware using operations and a global call-stack.  

The operations CALL and RET take finite amounts of time when implemented in hardware.

This means that functional notation, while useful for some kinds of use-cases, is not able to express the full gamut of computer operations.

Programmers have force-fitted finite-time concepts into functional notation.  This has resulted in unexpected bugs (see Mars Pathfinder disaster[^mp]) and general agreement that certain kinds of programming constructs are "complicated".  For example, "concurrency" is considered to be a difficult problem, causing issues such as "thread safety", "preemption", etc.

[^mp]: https://www.rapitasystems.com/blog/what-really-happened-software-mars-pathfinder-spacecraft

Furthermore, the assumption of instantaneous function calls - on paper - conflicts with the reality that hardware CALL/RET instructions are forms of ad-hoc *blocking*.  On paper, a function can call[^call] another function instantaneously, whereas in hardware, a function call suspends the caller until the callee returns a value.  The callee needs a certain amount of time to complete, and, we cannot calculate that time without knowing exactly what other functions are called and what functions are called by those functions, etc.

[^call]: Note that the word *call* is not used for paper versions of the notation.  The term *call* was invented with respect to computer programming.

#### Code Bloat Due to a Plethora of Types
Sector Lisp gets some of its leanness due to the fact that - like McCarthy's original Lisp - Sector Lisp has only 2 types
1. Atom
2. List

A machine needs lots of detail, while humans want to elide detail.  Sector Lisp is a demonstration of how large the notational savings can be if detail is elided.  The 2-type system provided by Sector Lisp is good enough for controlling a machine.

It seems that we need languages at both extremes - many types vs. very few types - and, we need a way to map from one extreme to the other, or, in only one-way, to map from a human-amenable language to a machine-executable language.

In the past, it was considered difficult to build languages, so programming language designs attempted to straddle both extremes.

Today, in 2022++, technology such as Ohm-JS ("new and improved" PEG), it is possible to invent languages quickly (e.g in an afternoon).  It is possible to tune one language for human use and another completely separate language for machine use.  

We see the beginnings of this kind of separation in the Assembler vs. HLL split, but, due to the difficulty of inventing languages, the idea of inventing multiple languages has not been exploited.  In fact, biases against the use of multiple languages have developed, probably due to the inadequacy of the one-language-to-rule-them-all approach.  Existing languages are full of minute details and doo-dads which makes such languages hard to learn and makes the idea of using more than one language seem unfriendly.

The idea of inventing languages has, historically, been relegated to the field of compiler development.  The concept of light-weight macros and text-manipulation tools, like those of UNIX, has been overshadowed by 
- the fear of learning complicated new language syntaxes, which leads to the unsubstantiated fear of learning *any* new syntaxes
- the desire to flatten all layers of design into walls of details, and, the desire to "make the trains run on time", and, the desire to construct software in a clockwork manner.  All of which makes software development accessible only to a select few.

The "answer" to these problems is to turn the problems on their side and to look at them from a new perspective and to re-examine the problems from first principles.

The problem is that software components are too complicated.  The solution begins with understanding why the complication arises, not to work around the complication.  7-line[^7] BASIC programs were easy to understand and to develop.  Issues such as "global variables" don't even arise when program sources are that small.  The answer is not how to solve the problem of creating 8-line programs, but to how to bolt 7-line programs together, recursively in layers, so that no layer has more than 7 lines of code in it.  Even a very large system - usually thought to be "complicated" - consists of 7 lines of code at the top level.  We don't need to throw details away, we simply need to bury details.  Once the top layer is understood, the reader might wish to know more details.  More detail can be revealed by drilling down into sub-components and examing them (each of which contains no more than 7 lines of code).  The fact that very complicated A.I. machines can be controlled 5 line Python programs indicates that the goal of small programs can be achieved.

[^7]: https://en.wikipedia.org/wiki/The_Magical_Number_Seven,_Plus_or_Minus_Two

In this scenario, each layer must be totally indepedent from lower layers.  Each layer must be *understandable* in a stand-alone manner.  

From a first principles viewpoint, we see problems like
1. dependency, especially hidden dependency due to synchrony, causes a trickle-down effect that makes layers not understandable on their own, and, makes them appear to be complicated
2. inheritance instead of parental authority - child code can change the behaviour of parent code, making the parent code not-understandable on its own, even if it is only 7 lines long.

GC (Garbage Collection) without the presence of mutation is small and simple, as characterized by Sector Lisp's 40-byte[sic] garbage collector.

#### Code Bloat Due to Type Checking - The State Explosion Problem
Imagine a simple piece of code to add two numbers.
```
number add2numbers (number a, number f) {
  ...
}

void main_not_bloated () {
  number a;
  number f;
  number result;
  result = add2numbers (a, f);
}
```
Humans understand the concepts of numbers.  The numbers might be integers or they might be doubles or they might be bignums.

Machines, though, don't understand these differing concepts and need to be programmed to handle the various cases in various ways and efficiencies.

In some languages, data carries tags that describe the type of the data.

In other languages, the tags are pre-compiled out and removed before execution.  The process of removing type tags must be done with enough care to allow the machines to know how to manipulate the data.

At the machine level, we might wish to transform the above code to handle the various cases of numbers as integers vs. numbers as floats.
```

float add2if (int a, float f) {
  ...
}

float add2ii (int a, int f) {
  ...
}

float add2ff (float a, float f) {
  ...
}

float add2fi (float a, int f) {
  ...
}


void main_bloated () {
  int a;
  float f;
  float result;
  result = add2if (a, f);
}

```
The machine-level code grows exponentially larger as new kinds of numbers, with different details, are included.

This effect is called the State Explosion Problem.  The effect has traditionally been associated with the development of State Machines, but, as seen above, the effect creeps into other aspects of programming.

The problem becomes even worse when languages allow programmers to define new types.  This is usually called "user-defined types" and "classes".

Various ad-hoc attempts have been made to reduce this problem in one-size-fits-all languages:
- the use of functions to wrap and parameterize similar runs of code
- inlining
- generic types
- etc.

Many of these approaches have runtime implications.  For example, the use of functions to abstract code causes the runtime code to run slower (due, at least, to the use of CALL/RETURN opcodes).

A great amount of compile-time effort (burning CPU cycles) is required to compile away all runtime implications of these solutions.  Again, the CPU effort is expended only to aid developers by checking for errors[^errors].  The machine doesn't care about type systems and other complicated structures.

[^errors]: But, only errors that are expected by the programmer(s) who wrote the error-checking app.

What is the cost-benefit for such expended effort?  

Compiling away all remnants of type checking is only fruitful once the design is known to work and is stable.  This is, traditionally, called Production Engineering.

During Design, though, it is unnecessary to compile away all type checking, and, the extra time and effort in doing so causes interruptions in the design process. Design is done when the designer is "in the zone" (or "in flow").  Interrupting the flow can severly diminish the abilities of the designer, and, hurt the design.

Software development appears to be in the "cottage industry" phase, where one programmer[^group] does all of the above work - from Design to Production Engineering.

[^group]: Or, one team of programmers.

##### Details kill

Details kill understandability.

It is the Architect's responsibility to make a design clear and understandable to other readers.

### Types Needed During Design
To interfere as little as possible in the Design process, we need approximately two types:

- things
- recursive lists of things

Currently, developers use compiler-appeasement languages that insist on extreme amounts of detail to help compiler apps to check for errors.  Compiler-appeasement languages, though, impede the progress of product development, often in subtle ways, e.g. by breaking development "flow" by insisting on extreme amounts of detail[^save].

[^save]: As a simple example, any software tool that asks "where do you want me to save this?" up front, is asking the developer to stop developing to deal with information to satisfy the tool's problem.  Likewise, something like "which kind of mind-map do you want to build?" is a development-breaker.  Another deal-breaker is "declaration before use" which is a concept developed to appease 1950s biases.  Computer hardware in 2022++ is fast enough to perform multi-pass compilation, but, programming language designers continue to insist on 1950s-style declaration-before-use.

Error checkers like *lint* are more humane.  *lint* does not change the development programming language. *Lint* does its best to look for potential errors. *Lint* is like a barnacle attached to the side of a program.

Lisp introduced the concept of gradual typing, but, most modern languages insist on making programmers specify types fully. 

#### Code Bloat Due to Word Size
Building a compiler that was portable across two memory architectures - 8-bit and 16-bit - I measured code size for the same source program[^lost].

[^lost]: I've lost the actual supporting data over time.  I'm writing this from memory.

The 8-bit version was 40% the size of the 16-bit version.  I.E. the 16-bit version of the *same program* was more than twice the size of the 8-bit version.  That's greater than 100% inflation.

The reason for the size increase is that larger word sizes are not needed to encode all instructions nor operands.  Larger word sizes contain waste bits for instructions and operands that could be encoded more succinctly.

The trade-off involves memory fetching. Smaller word sizes need multiple fetch cycles to read large instructions and operands from memory.  In an 8-bit architecture, this means that the most efficient opcodes and operands are in the 0..255 range.  All other opcodes and operands take more time to read from memory.

Word size also affects internal circuitry - it takes less space in an IC to build circuits for handling 8-bit quantities than building the circuitry to handle the same quanities in 16-bit form.

Word size affects VLSI pinout.  CPU chips  typically have separate pins for each address line and for each data line. Connections inside a chip are very small, too small for handling by humans and early industrial machines.  Pins are used to bring electrical connections from inside a chip to the outside world.  Pins are little tabs of metal that are electrically connected to the points inside ICs.  In the 1970s, ICs were mostly assembled by humans wielding soldering irons and various other kinds of wiring technologies (like wire-wrapping).  With improvements in miniaturization, it was possible to shrink the size of pins while retaining the ability to assemble electric circuits using automated equipment (e.g. wave soldering) and humans wielding smaller-tipped soldering irons and magnifying glasses.

For a typical 8-bit architecture, like the 8080, Z80, MC6809, etc., the data bus consists of 8 pins and the address bus consists of 16 pins.  16-bit addresses are used in these specific architectures, but, this doesn't mean that all 8-bit machines use 16-bit addresses.  This is a total of 8+16 pins, ie. 24 pins to access RAM.  In fact, one or more extra pins are needed to manipulate the RAM (e.g. the Write line, a clock signal, power, etc.)

For 16-bit architectures, the pin count goes up.  For example, the data bus needs 16 pins and the address bus is expanded to 24 or 32 pins (40 and 48 external pins, respectively.)



## Other Syntaxes

Random comments about miscellaneous syntaxes / technologies ...

Programming doesn't have to mean text-only.  The goal is to control (use) a computer.  The goal is to generate instructions for the computer to follow.  Somehow.

### Spreadsheets
- Maybe the most successful non-programmer syntax is the spreadsheet.
- flat grid
- list of builtin functions
- simple set of rules
	- grid + palette of possible functions to use
	- no decisions to be made about using nor extending the technology
	- simple, uncomplicated, "simplicty is the lack of nuance"
	- grade-school math, simple equations
	- simple syntax for accessing cells - row, column - no need to remember names
	- future: instead of naming cells, show different views
	- e.g. dependencies on other cells
		- Racket-like lines
	- e.g. synonyms, e.g. \$A1\$B2 is, also, called "Total", also, called "Sum of Column (\$C3:\$C99)"
	- use hotkey to toggle between \$A1\$B2 syntax and synonyms
	- there is no "one language to rule them all", different users may want different names, allow switching via synonym toggling
	- synonyms can apply to code, too
		- "y = *slope* times *x* + *y offset*" is, also, "y = mx + b"
		- lambda functions are barking up this tree

### Relational Programming
- PROLOG
	- granddaddy of declarative programming
	- uses backtracking to perform exhaustive search
	- sneered at in 1950s, due to biases that favoured speed optimization
	- backtracking driven by desire to conserve memory
- miniKanren
	- does not use backtracking, but, also, implements exhaustive search
	- coagulates all possible outcomes and feeds set of outcomes forward
	- prunes outcomes that cannot happen from the set of possibilities
	- final result = set of all possible ways to satisfy a goal
	- not concerned with expending memory, hence, doesn't need to use backtracking
		- backtracking is difficult to implement
		- backtracking is difficult to understand
- what not how - declarative programming
	- Relational Programming splits problems into two parts 
		1. What
		2. How
		- What is specified by the human programmer
		- How is implemented in an engine, freeing the human to think about the larger problem instead of dealing with details

### Everything is a String
- Lisp treats everything as Lists, there are some languages that treat everything as strings
- SNOBOL
	- the granddaddy of string-based languages and string matching
- Icon
	- grew out of SNOBOL
- TCL/tk
	- TCL is a scripting language based on treating all data as strings of characters
	- tk is a library for creating graphical views on data that grew out of the ability to suppress details like how the data is actually structured (e.g. integers vs. strings, etc.)
		- the details are all still there, but are elided at the top level
		- the details are buried in the TCL engine
- Parsing
	- string-matching technology usually associated with compiler building
	- compilers are simply big transpiler apps
		- convert a string of characters into another string string of characters
		- high-level language text converted into assembler text (and/or to bits)
### Scripting
- like "everything is a string", but, includes files and redirection
- scripting is still *programming*, it uses scripts to control behaviour of computers
- example: /bin/sh
- example: emacs lisp
- example: cmd.exe
- often a "dynamic language" which punts typechecking to runtime

### Hypercard
- https://en.wikipedia.org/wiki/HyperCard
- https://hcsimulator.com

### Dataless Programming Languages
- dataless languages - don't require programmers to define data, just declare the existence of data
	- e.g. "handles" in operating systems
	- e.g. S/SL (Syntax/Semantic Language, Holt, et al) https://research.cs.queensu.ca/home/cordy/pub/downloads/ssl/
	- powerful enough for implementing compilers (e.g. PT Pascal, Concurrent Euclid, etc.)

### Concept: Orthogonal Programming Languages
- based on dataless languages, Cordy's Orthogonal Code Generator, and GCC's RTL
- OOP is 1/2 of the story
- control flow is the other 1/2
- data representation
	- Objects are often expressed as Classes with Methods
		- similar to mathematics concept of conditional functions
	- control flow is often expressed as *syntax*
		- syntax can, now, be quickly built using Ohm-JS (improved PEG)

### WASM
- Lisp-like syntax
- uniform syntax
- intended to replace JavaScript in websites
- intended to be "more efficient" than JavaScript
- attempt to add type information on operands and operators while using recursive assembler-like syntax

### VPLs
- StateCharts
		- StateCharts exhibit a lot of goodness
			- encapsulation
			- parental authority
			- diagrams instead of text for control-flow aspects
				- text can be used where it makes sense
		- reading of Harel's paper: https://guitarvydas.github.io/2020/12/09/StateCharts.html
- Scratch
	- ostensibly for children
	- hampered by synchronous mindset
	- https://scratch.mit.edu
- Full Metal Jacket
	- attempt at a pure functional visual syntax
	- https://www.fmjlang.co.uk/fmj/FMJ.html
- Drakon
	- rocket science
	- better than flowcharts (less ad-hoc)
	- transpiled to multiple languages, like Erlang, Python, Lua, etc.
	- https://drakon-editor.sourceforge.net
	- https://drakonhub.com/en/
- FBP
	- components that use streams of data
	- all components are asynchronous by default
	- https://en.wikipedia.org/wiki/Flow-based_programming
	- noFlo
		- grafts many concepts of FBP onto JavaScript
		- components are not asynchronous by default
		- https://noflojs.org
- node-red
	- one input port
		- need to look "inside" to see what inputs are supported
		- single input port assumption sprayed throughout node-red source code
			- not easily changeable
	- components are not asynchronous by default
		- function-calling (call-stack) remains at the heart of the notation/implementation
	- https://nodered.org
- LabVIEW
	- big, flat diagrams
	- doesn't encourage layered abstraction
	- encumbered by synchronous mindset
	- https://www.ni.com/en-ca/shop/labview.html
- ProGraph
	- diagrams of OO Objects
	- fundamentally synchronous, does not encourage independent layers
	- defunct
	- https://en.wikipedia.org/wiki/Prograph
- UML
	- "modeling" instead of "compiling"
		- very few constructs can be compiled to code, too abstract/ad-hoc
		- notable exception: StateCharts can be compiled to code
	- https://en.wikipedia.org/wiki/Unified_Modeling_Language
- hybrid
	- need detail to program a computer
	- text PLs provide detail for calculator-like operations
	- what does VPL provide beyond what text already provides?
- whither Diagram Compilers? Tech Diagrams?

### Low-Code
- deja vu all over again, used to be called RAD
- RAD - Rapid Application Development, 
- interpolate, cannot extrapolate

### HTML
- declarative description of websites
- needs JS as a crutch for imperative operations that aren't handled in declarative syntax
- the most common portable syntax
	- every browser on every computer, on every phone and every tablet supports HTML
	- assembler is more common, but not portable

### XML
- generalization of HTML
- attempt to parameterize HTML, resulting in complication

### Declarative Programming
- Barliman
	- https://www.youtube.com/watch?v=er_lLvkklsk
- Relational Programming
	- swipl
		- https://www.swi-prolog.org
	- miniKanren
		- http://minikanren.org

### TXL
- functional language for exploring syntaxes for existing languages
- http://txl.ca

### AI generates Code
- generated / trained code based on code in github
- synchronous - since most code in github is fundamentally synchronous, the training data is fundamentally synchronous, hence, the generated code is fundamentally synchronou
- ChatGPT
	- https://openai.com/blog/chatgpt/
- Copilot
	- https://github.com/features/copilot

### ROS, Behavior Trees
- Robot Operating System
	- complicated libary of functions that support asynchronous control using synchronous functions
	- https://www.ros.org
- Behavior Trees
	- epicycle to add *time* back into functional/synchronous code
	- "tick" is the same as "synchronous clock" in hardware design
	- builds asynchronous state machines on top of synchronous code, uses "tick" to step the state machines
	- https://navigation.ros.org/tutorials/docs/using_groot.html

## 1950s Text-based Programming Languages
- The difference between 1950s text based programming and more modern diagrams is that in the 1950s text needed to be arranged in non-overlapping grids of characters, whereas in 2022++ *text* is just another figure on the diagram.  
	- Figures can overlap.  
	- Figures can be moved around.  
	- Figures do not imply sequential sequencing.

### Smalltalk
- Smalltalk, like Lisp, doesn't have much of a syntax
- control flow implemented using "tricks" such as passing closures ("blocks") to functions
	- e.g. `if` is essentially a function that consists of 3 closures
		1. test expression (returns an Object of type Boolean)
		2. `then` block ("ifTrue:" message to Boolean Object)
		3. `else` block ("ifFalse:" message to Boolean Object)
- Methods are synchronous function calls
	- "message passing" is synchronous, not asynchronous
