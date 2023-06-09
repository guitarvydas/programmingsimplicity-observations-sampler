# 5 Whys of Software Components
Q1: Why can't we plug software modules together like LEGO® blocks?

A: Because software is too complicated.

Q2: Why is software too complicated?

A: Because we can't plug software modules together like LEGO® blocks.

Q3: Why can't we plug software modules together?

A: Because the interfaces are way too complicated.

Q4: Why are interfaces too complicated?

A: Because libraries and APIs have hidden dependencies.

Q5: Why do libraries and APIs have hidden dependencies.

A: Because we use languages that hide dependencies.

Q6: What kind of dependencies are hidden by languages?

A: For one example, CALL / RETURN leaves breadcrumbs on stacks, forming dynamic dependency chains.

Q7: Why does CALL/RETURN leave breadcrumbs on the stack?

A: RETURN needs to follow the breadcrumbs back to the caller.

Q8: What happens when a CALLed routine calls another routine?

A: The callee becomes the caller and leaves another breadcrumb on the stack. 

Q9: Why is a stack used?  Why not use a "register"?

A: Stacks are used so that previously laid breadcrumbs are not over-written.  If we didn't have an automatic stack mechanism to save our breadcrumbs, we'd have to save them manually in some sort of list.

Q10: Is the stack of breadcrumbs a dynamic data structure?

A: Yes.

Q11: Is the stack of breadcrumbs a dependency chain?

A: Yes:

Q12: Is the stack not just a list?

A: Yes, but it is an optimized list.

Q13: Why is it necessary to optimize lists to make stacks?

A: Because we need to optimize memory usage.

Q14: Why do we need to optimize memory usage?

A: Because memory is expensive

Q15: Why is memory expensive?

A: Memory used to be expensive in the 1950's.

Q16: Is memory still expensive in 2020?

A: No.

Q17: Why do we use techniques to optimize memory usage, when memory is no longer expensive?

A: Uh, because we've always done it that way.

Q18: Did we notice that the ground truth has shifted?  Memory used to be expensive, but is no longer expensive?

A: Uh, no, we didn't notice.

Q19: Why didn't we notice?

A: Uh, because we believe in building on the shoulders of others. 

Q20: Are we in the weeds?

A: Yes.

## Acknowledgement

5 Whys suggested by Daniel Pink in Masterclass: https://www.youtube.com/watch?v=My7hjBp4wH0