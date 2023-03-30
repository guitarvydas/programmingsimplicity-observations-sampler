Complexity is not the problem.

There is no silver bullet.  There are many silver bullets.

The main problem in software design is scalability.

We want to "plug" pieces tother like LEGO blocks.

Better scalability implies fewer dependencies.

Early hardware people got this "right".  They took incredibly complicated devices (semiconductors made up of various kinds of rust) and built chips / ICs (integrated circuits).

Chips were black boxes.  They had a set of input/output pins.  The insides of the chips were inscrutable - encased in opaque epoxy.

Nothing leaked out of or into a chip except through the pins of the chip.

Properties of a chip were described in easily-measured terms:

-   voltage on a pin
-   current needed by a pin
-   diagram / chart of the outputs, given a set of inputs
-   timing.

Then, hardware designers "discovered" that point-to-point wiring between chips led to non-scalable designs.

They built a (small) hierarchy - chips mounted on boards plugged into backplanes.

The earliest backplanes were basically point-to-point wiring harnesses.  For example, an early Wang word processor had a backplane with some 400 pins, allowing a chip on one board to send signals directly to a chip on another board.

Then, came the S100 bus.  It had only 100 pins.  It was well defined and documented.  Certain connections were not allowed, even if they could be done more efficiently as point-to-point connections.

The idea of the Bus led to Apple computers and, ultimately, the IBM desktop computer.  (There was more than one Bus definition, but the market shook those out).

Can software be built like chips?  I argue Yes.

We need to build software in hierarchies.

Divide and conquer.

No leakage - of anything - between layers in a hierarchy.  ("Anything" includes things like variables, types, control flow, dependencies of any kind, etc.).

Coming back to Complexity: we *don't care* how complicated a component is, as long as it is well-encapsulated and as long as we don't have to deal with any of its leakage of dependencies.

I see software as a hierarchy of black boxes.  The Architect for each box _chooses_ the best way to describe the design intent of a black box.  The Engineer figures out how to dot the I's and cross the T's.  The Production Engineer figures out how to make the black box "more efficient" and the Coder lays the bricks to implement the black box.

A good Architect will have a tool-belt full of Silver Bullets.  Maybe a problem is best described in Relational terms, maybe a problem is best described as a State Machine (as a diagram, yet), maybe a problem can be broken down in a synchronous manner, etc., etc.

## Insidious Form of Dependency

An insidious form of dependency that is overlooked is the "dynamic call chain" created by using a (usually hidden) stack to store state and return addresses between function invocations.  This dependency must be broken if software is to scale to new heights.  Breaking this kind of dependency requires Concurrency.  Concurrency, currently, has a bad name (i.e. it is thought to be a "hard" problem) because it has been tangled up with Time Sharing and Operating Systems.  Most applications don't need Time Sharing and all applications, except Linux, MacOSX, Windows, etc., don't need to implement operating systems.  Concurrency is *much* easier when Time-Sharing is removed.## Old Reality vs. New Reality
Old reality - The old reality was: limited memory and one CPU (hence, the name "Central Processing Unit").  In this reality, it was reasonable to simulate concurrency and have one stack per process.

## New Reality vs. Old Reality
New reality - Huge amounts of memory and many processors (none of those being "Central").  In this reality we can afford to have multiple stacks (e.g. one for each type) and use SEND() for every kind of data movement (displacing function parameters, return values, exceptions, all of which came about due to the Old Reality).

There is nothing "new" in the above ideas.  Humanity has dealt with issues of isolation and timing many times before.

For example, businesses are built on the notion of hierarchy.

For example, music scores deal with real-time issues and sequencing.
  
## Measuring Isolation

-   No need for _make_
-   No need for any package managers
-   No need for tools like AutoConfig.
-   Manuals that are only one page long.

Other measures:
- Using a hierarchy of DSLs to solve a given problem.
- Breaking out of a text-only syntax mentality, using DaS (Diagrams as Syntax).