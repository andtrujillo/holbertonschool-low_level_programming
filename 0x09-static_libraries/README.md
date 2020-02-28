# 0x09. C - Static libraries
---
Project Due: 03-02-2020  
A static library is a set of routines, external functions and a collection of a source code that is directly compiled into a binary file. Bundled into seperate `.o` files which allow the programmer to statically link into executables that use these functions after being linked together.A static library ends in `.a` and is made by a tool on the linux OS command line interface`ar`. Saving recompilation time. These libraries are then used by invoking the appropiate gcc flag and parameters during the gcc call in the final compilation stage of our resultant ELF executable. As, the call to 'ld' may change in the future. In short, our static libraries allow users to link to programs without having to recompile its code.

A command used to create a static library from object file is the 'ar' command in linux.
We use `ranlib` command to index an archive that has recently been packed. Commands that can be used to list the symbols stored in a static library are `nm` and `ar`. The format of a static library is of an archive.

## Tasks  
---

| File | Description |
| --- | --- |
|  libholberton.a, holberton. | Static library containing multiple functions |
| create_static_lib.sh  |Script that creates a static library called `liball.a` from multiple c files  |

