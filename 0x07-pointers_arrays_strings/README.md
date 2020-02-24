# 0x07. C - Even more pointers, arrays and strings
---
## Foundations 
Project Due: February 25, 2020

| File | Description |
| --- | --- |
| 0-memset.c | Function that fills memory with a constant byte |
| 1-memcpy.c | Function that copies a memory area |
| 2-strchr.c | Function that locates a character in a string |
| 3-strspn.c | Function that gets the length of a prefix substring |
| 4-strpbrk.c | Function that searches a string for any set of bytes |
| 5-strstr.c | Function that locates a substring |
| 7-print_chessboard.c | Function that prints the chessboard |
| 8-print_diagsum.c | Function that prints the sum of the two diagonals |
| 9-set_string.c | Function that sets the value of a pointer to a char |

### What are pointers, and how do I use them?
Pointers are variables in the C-Language that hold an address to another pointer, variable, function array or structure. Pointers to pointers are variables in the C-programming language that hold an address to another pointer instead of the variable that the first pointed object is referencing.

### What are multi-dimensional arrays and how do I use them?
Multi-dimensional arrays are not like normal arrays. They hold multiple arrays of arrays. To use a regular array you would call the variable name, `type my_single_arr[0];` where the T(type) of the array with the variable name "my_single_arr" can be a char, int, double or any of the other C-programming language types. This type will determine what data the array of arrays will hold. Multi-dimensional arrays are defined, similarly `type my_multi_arr[0][0];` this defines an array of zero by zero square. Or, `type my_multi_arr[10][5];` is equivalent to defining an array of 10 rows and 5 columns or values.

### What are the most common standard library functions to manipulate strings?
The most common ones are:  
	* strcat - Concats two strings
	* strchr - String scanner for characters
	* strcmp - Compares two strings and returns Ascii value difference
	* strcpy - Copies two strings from src to dest
	* strlen - Gets length of character array
	* strncpy - Copies two strings, n bytes
	* strncmp - Compares n bytes of two strings  
`mem` functions manipulate strings arbitrarily without regard to the null character
`str` functions manipulate character arrays that are null-terminated
`strn` functions manipulate character array sequences of non-null characters

