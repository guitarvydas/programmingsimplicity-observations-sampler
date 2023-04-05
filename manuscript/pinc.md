
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
