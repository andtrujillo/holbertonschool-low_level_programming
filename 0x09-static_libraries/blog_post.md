# C-Language static libraries 
We use static libraries in the C programming language so that we can create portable modular programs that provide additional functionality to our program that is not in the standard library. We can find our standard header directories in /usr/local/include and then /usr/include. This is where the GNU compiler will look for standard library functions provide by the POSIX C standard library functions.The portable operating system interface is a standard set forth by the IEEE Computer Society. To promote compatible systems throughout utility interfaces while programming the application programming interface (commonly known as ABI) of differing variants of Unix, Linux and other operating systems. Static libraries are object files that are later combined with another object to form a final executable.  
The C standard library consists of functions and methods that are common and widely used to make programming easier(such as providing standard input and output buffering). The standard library as well has math functions that allow the user to do simple calculations with a function call(think of ordering pizza but you get back math instead) instead of manually importing the entire function into their source code. The way that this is accomplished is by using `#include` directives that pull the file contents during the pre-processing stage of compilation into the source file as an abstracted process(hidden or removed from) to make the programmers job easier. Creating our static library will be very similar to what this accomplishes except we will have to include our archive of seperately compiled files because it is not in the C language standard library. While this is a rather mysterious and less known area of software development we will go step by step in what happens in the creation of a static library.  

Static libraries work by being a collection of functions or variables designed to be used by an executable across similar operating systems and computer architectures. 

```
/home/vagrant/school/holbertonschool-low_level_programming/0x09-static_libraries
<<>>|: ls
total 176
drwxrwxr-x  2 vagrant vagrant 4096 Feb 28 18:26 .
drwxrwxr-x 14 vagrant vagrant 4096 Feb 28 16:03 ..
-rw-rw-r--  1 vagrant vagrant  296 Feb 28 16:03 0-isupper.c
-rw-rw-r--  1 vagrant vagrant  432 Feb 28 16:03 0-memset.c
-rw-rw-r--  1 vagrant vagrant  579 Feb 28 16:03 0-strcat.c
-rw-rw-r--  1 vagrant vagrant  525 Feb 28 16:03 100-atoi.c
-rw-rw-r--  1 vagrant vagrant  277 Feb 28 16:03 1-isdigit.c
-rw-rw-r--  1 vagrant vagrant  336 Feb 28 16:03 1-memcpy.c
-rw-rw-r--  1 vagrant vagrant  736 Feb 28 16:03 1-strncat.c
-rw-rw-r--  1 vagrant vagrant  711 Feb 28 16:03 2-strchr.c
-rw-rw-r--  1 vagrant vagrant  221 Feb 28 16:03 2-strlen.c
-rw-rw-r--  1 vagrant vagrant  440 Feb 28 16:03 2-strncpy.c
-rw-rw-r--  1 vagrant vagrant  273 Feb 28 16:03 3-islower.c
-rw-rw-r--  1 vagrant vagrant  200 Feb 28 18:26 3-puts.c
-rw-rw-r--  1 vagrant vagrant  308 Feb 28 18:26 3-strcmp.c
-rw-rw-r--  1 vagrant vagrant  766 Feb 28 18:25 3-strspn.c
-rw-rw-r--  1 vagrant vagrant  288 Feb 28 16:03 4-isalpha.c
-rw-rw-r--  1 vagrant vagrant  445 Feb 28 16:03 4-strpbrk.c
-rw-rw-r--  1 vagrant vagrant  416 Feb 28 16:03 5-strstr.c
-rw-rw-r--  1 vagrant vagrant  305 Feb 28 18:25 6-abs.c
-rw-rw-r--  1 vagrant vagrant  305 Feb 28 16:03 9-strcpy.c
-rw-rw-r--  1 vagrant vagrant  739 Feb 28 16:03 holberton.h
-rw-rw-r--  1 vagrant vagrant  240 Feb 28 16:03 _putchar.c
-rw-rw-r--  1 vagrant vagrant 1327 Feb 28 16:03 README.md
```
---  
To create a static library you first invoke the gcc collection compiler as such `gcc -c` the next step after typing this is to specify after the `-c` what files you would like to pack together in your library archive. 
<<>>|: gcc -c *.c
---  
The following step is to use the `ar` linux utility to create the actual archive. The "ar" tool creates, modifies and extracts from archives. An archive is a single file holding a collection of other files in a structure that enables indexing for fast retrieval of files and their respective functions. An example from my personal project produced for the Holberton Software Engineering program. After the above compilation steps I was left with multiple object files. 
```
<<>>|: ar rcs libholberton.a  *.o
<<>>|: ar -t libholberton.a
0-isupper.o
0-memset.o
0-strcat.o
100-atoi.o
1-isdigit.o
1-memcpy.o
1-strncat.o
2-strchr.o
2-strlen.o
2-strncpy.o
3-islower.o
3-puts.o
3-strcmp.o
3-strspn.o
4-isalpha.o
4-strpbrk.o
```
The following contents would now be in `libholberton.a` and we can continue to the next step.
```<<>>|: ranlib libholberton.a```
This step is just as important as the rest of them in that it indexes all the symbols into 
---
To create a static library you would first need to link the resultant file with `gcc -L` and the the main function source file. Then you after this step you have successfully linked a static library to your archive.
