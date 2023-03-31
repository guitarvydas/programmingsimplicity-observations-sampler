# Control Flow
## Video


![Holy Grail video](https://youtu.be/3Y3Zfpj_QSY)


---

## Slides
tbd

---


## Transcript

I'm gonna talk about control flow. This is a map of where we're going. I'm gonna simplify it. I break control flow up into three main categories, sequential, non sequential, and then envelope or what we call multitasking these days. 

- Sequential is where one action happens after another.

- Non-sequential control flow is where actions happen in an order that is different from one after another. 

- Envelope is a non-sequential programming, but I think of it as being,  higher level than non-sequential. Non-sequential breaks down into four main cases. Case call go to try throw and.

Call includes recursion and return. Some would say that,  recursion is in fact the kind of,  or is the,  the uber parent of calling. And so I'll try to do that if I can. Here, there we go. Go to is the main way to change control flow in a,  standard program. Go-to is not a problem, but unrestricted use of go-to is a problem.

Very early on we realized that,  doing go-tos all over the place was a bad idea. We invented something called structured programming and that broke down into if then else for and while, and then a language called concurrent Euclid,  in used something called a loop, which subs. Both for and while into one construct called the Loop Exit, when and end.

It might be noted that first class functions are really just a kind of go-to,  which is even more unrestricted than the original go-to that we had. Continuation passing style comes from first class functions,  and it is just the ultimate go-to that is available to us if we stop treating, go-to as something to be shunned and as a useful but very low level operation.

We can branch structured programming into other kinds of ways of,  structured program.  gave us only one way to constrain the use of go-tos. There are different ways,  another way to constrain go-tos is by using state machines, they give much more flexible control flow const, or they give different flexible control flow constructs.

Structured programming gave us one way to constrain go-tos. There are different ways. . There are different ways to constrain go-tos than just using structured programming. One is state machines. Another one we'll see later is just,  using an envelope. State machines are interesting,  in that. In 1986, Harel wrote a paper called,  about StateCharts.

I discuss state charts in my blog at this address. Try, throw and catch is a bag added onto the side of common programming languages to handle non-sequential,  dynamic control flow chains. Co routines, albeit useful, have been left in the dust by most of our current programming languages. 

Now we'll look at the,  thing that I call an envelope, which breaks down into processes that are threads and networks.

looking at processes,  we notice a,  that they involve shared memory. They use a global variable called the stack, and they involve time sharing. All of these issues are issues based on early forms of computing. Back in the 1950s, CPUs and memory were expensive. These things have given us accidental complexities.

Now let's look at networks. This is the wave of the future of computing in my mind. 

Networks break down at http  and ethernet. Mostly,  in networks. We also can draw sensible diagrams of things,  although we haven't formalized it.  Networking has,   created a new breed of language. We call that language, HTML.

It is,  declarative and it's not stack based, so it can,  go across distributed processors. There are parts of HTML that we haven't figured out how to make declarative. So we use JavaScript and other things,  to help us,  create program more interesting programs using HTML up to now we've been,  trying to,  shoehorn everything into a calculator style style of programming,  embodied by the original use of computers, which was to, perform calculation ballistic calculations. A new form of computing, or a different form of computing is,  distributed control flow or machine control. Tends to break the types of things we can do with current programming languages.

The most,  distributed processing and distributed control is gonna be where IoT ends up,  inform in Internet of Things. . Right now we're using,  old fashioned techniques like,  dropping this enormous library called Linux on top of small processors,  when we could be shaving,  these programs to,  suit their purpose.

For example, controlling a refrigerator does not require all of Linux.