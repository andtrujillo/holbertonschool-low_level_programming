# 0x08. C - Recursion
---
Project Due: 02-27-2020
## Objectives  
Recursion - The repeated application of a recursive procedure or definition, to run back.  
-Oxford Dictionary  
---
Implementation - The implementation of a recursive function in the C programming language is defined as the ability for a programmer to use a function call within a function. During this process a new stack frame is allocated for the functions next iteration creating a new instance of a variable that he/she wishes to loop through. This new variable is checked through each recursive function call to determine if certain conditions(base condition) have been met to interrupt control or to pass control of process back to main or where the function was called from. Situations that benefit the most from a recursive function call are repeatable actions. Have a pre-determined run-time or if a certain condition is met. All to prevent an infinite loop. Situations where you shouldn't implement a recursive function if control has to be passed back to the callee or when needing to access the variable being recursed upon by the functor. Unless, the condition is met the function has the ability to change the object during the recurse call preventing it from being accessed because of its indeterminate nature. The executionary context of a recursive call will continue to keep place these objects onto the stack until there is no more memory available for the system to allocate to the function call. A stack overflow occurs when none of the items fit in the stack. The capacity or memory of the stack is exceeded by the numerous function calls that didn't reach the base condition. 

---
```
uname -iav
x86_64
vagrant-ubuntu-trusty-64 3.13.0-170-generic
#220-Ubuntu SMP Thu May 9 12:40:49 UTC 2019
```
