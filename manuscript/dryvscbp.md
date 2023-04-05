# DRY vs. Component-Based Programming
One of the thrusts of Component Based Programming and of FDD is:
- Replace boiler-plate parts of your workflow with automation.  Get the machine to do as much of your work as possible.

DRY (Don't Repeat Yourself) is a central lesson of Computer Science.  But, it only applies to human-written code.

It's OK if the machine does RY, but if a human does RY, trouble looms (e.g. forgetting to update every instance of every piece of code).

Component-based programming allows copious RY.  "Referential transparency" in FP is an RY-enabling feature.  HyperCard was kinda component-based programming.  Spreadsheets allow potzers to use RY more before they get into scalability issues.

Solutions that I know of:
1. Components.  Wrap code into bundles and give each bundle an input API -AND- an output API.  You can copy/paste and/or replace bundles that have exactly the same input and output APIs.  All code goes into separate bundles.  One can copy/paste bundled code without futzing with the code itself.  When you change code inside a component, all other uses of that component see the same fix.  Programmers believe in the fiction that Libraries already do this, but, they don't, due to hidden dependencies caused by Call/Return.
2. If one utterly insists on using text, one might check out the research in "clone detection".  I haven't checked this out, but I see that Cordy and Roy invented something called NiCad.  Cordy is a simplicity hero.  Cordy was mentored by Ric Holt.  I learned a lot from Holt and Cordy.