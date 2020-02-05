# What happens when you type 'gcc main.c'
### C preprocessing
The first thing that happens when you run 'gcc main.c' from a computer is that the compiler will call a pre-processor(cpp) that will perform a series of transformations to the file. Then the input file will be read into memory and broken into lines. 

The next thing to happen during the first three phases of translation as described in the C Standard is that if trigraphs are enabled, they will be replaced by their corresponding single characters. These nine three character sequences that start with '??' are defined by the ISO C standard to stand for single characters such as newline, or braces and comments. 

In our case with no flags or special options given to the gcc command before our file is compiled, assembled and linked. It will move on to create one long line from continued lines which are lines that end with a backslash(Formerly, backslash-newline). 

The comments are then removed from our main.c file. 

### Preprocessing language
The next step is compilation after pre-processor determines all tokens and/or how it will handle all the data being passed to it from the source code or text-file within main.c. Parsing this text is important or else the compiler wouldn't know how to turn the text into something useful. The preprocessing language is important because it contains directives to be executed and macros to expand. These two terms are important but deserve their own post. In, brief its the top of the file that will provide declarations, abbreviated code, compile conditions such as debug mode or whether to include other files in the present of certain environment conditions.

### Compilation 
Through and before each step we reach we can specify when and what file we would like from the compiler. The flags are (-E, -S, c). After preprocessing we recieve from the 'cpp' command .i files which then allows us to further compile with the next flag as stated before previously. 

### Assembly
The next step our main.c file goes through is the assembly stage where we can finally have something close to what our CPU is able to understand from our software environment. Assembly is filtered through an assembler that will convert machine code into zero's and one's so that our input is successfully transferred back and forth between the system and user.

### Linking
The last step our file main.c receives is that it is linked.The command, ld links our object code with the library code to produce an executable file. 

Our main.c file has escaped and is now able to run on many systems.
Thank you!

Sincerely,
        Andres Trujillo
