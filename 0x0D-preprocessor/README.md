# 0x0D. C - Preprocessor
---
Project Due: 03-10-2020
---
While I've been learning how to program online and through the Holberton School. I have not seen many macros besides the ones found in the K&R Bible such as PI for 3.14, BUFFER 1024 for automatic allocated arrays. Also, ternary operators are very popular in macros such as computing the absolute value of a number(variable). These common macros are defined and used within this folder of the repository.  
## What are macros?  
Macro's in the C programming language allow software developers
to choose what to include from an external source header. In header
files we can define variables that during the preprocessing stage of 
compilation will be replacing the token or keyword with the defined
object. In more formal terms it is a simple identifier which will 
replace a code fragment within our source file. It is called an object
because it looks like a piece of data that the code uses to further
a computation step or define a piece the the source will use to continue
running our executable.  
## What are the most common predefined macros?  
The most common predefined macros are GNU C extensions.
* NULL
* __COUNTER__
* __GNUC__
* __BASE_FILE__
* __INCLUDE_LEVEL__
* __ELF__
* __VERSION__
* __OPTIMIZE__

---
File|Task
---|---
holberton.h | holberton header
0-object_like_macro.h | header file that defines a macro named SIZE as an abbreviation for the token 1024
1-pi.h | header file that defines a macro named PI as an abbreviation for the token 3.14159265359
2-main.c | program that prints the name of the file it was compiled from, followed by a new line
3-function_like_macro.h | Write a function-like macro ABS(x) that computes the absolute value of a number x
4-sum.h | Write a function-like macro SUM(x, y) that computes the sum of the numbers_x and y
