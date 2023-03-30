# The Holy Grail of Software Development
## Video

https://youtu.be/3Y3Zfpj_QSY

## Transcript

The holy grail of software development. What is the holy grail? It's simple. We wanna build a piece of software and forget how it works. We just want to use it. We want to design it, bench, test it, then ship it with no further bugs in the field. This is possible. And digital hardware design, you could design, debug a design on a bench, ship it, and we would have zero bugs in the.

even though ICS that make up a electronic circuit are all asynchronous they're, what we call multitasking telecom. In the 1980s at least, had something called the four nines culture. They guaranteed a 99.99% uptime. It. It was so ubiquitous that people would call each other during a power failure on a telephone and say, is the power out at your, where you.

And they wouldn't even notice that the phone was still working even though there was power failure. So in software, we have many bugs in the field. We have monthly, weekly, daily updates. We have something that I'm calling GitHub culture, where somebody looks at a repo and says it can't be any good if there weren't any recent pushes to the repo.

That's the wrong emphasis. Working code should be perfect. It should need no new modific. Sam Aaron, for example, teaches 10 year olds how to create multitasking programs. What's our problem? What's the difference between software and hardware development? That's a rhetorical question. I think it boils down to the use of global variables.

I think that all current languages use a hidden global variable that includes functional programming. And most CPU architectures the stack is a global variable.

Having that global variable hidden from view has been causing this accidental complexity. Call and return instructions provided by the hardware implicitly use the stack and it's a global variable. There's only one copy of it. We, talk. Things like thread safety, and we have this fiction that multitasking is hard, and all of that stuff is caused by the fact that we use a global variable called the stack.