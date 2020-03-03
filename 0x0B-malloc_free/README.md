# 0x0B. C - malloc, free
---  
Project due  03-04-2020

### What is the difference between automatic and dynamic allocation? What is malloc and free?
Automatic memory allocation gets handled by the compiler during compilation. Allocating space on the stack for our arrays according to a constant size that is immutable during the lifetime of the program. Simply, `int my_array[10] = {0};` Will cause the compiler and system to allocate 10 elements of type integer and initialize the first element to zero.  
Dynamic memory allocation is handled by the programmer and will vary during the lifetime of a program. `void *malloc(size_t size)` is the
standard library subroutine that will allocate a number of bytes according to the size of the data type we need. If we need an int and we cast malloc to an integer pointer-type and then pass the amount of integers we need for our array. `(int *)malloc(10 * sizeof(int))` This will return an address or a pointer to a memory block that the system has given us control over. So we would need to create a pointer in the C language to accept this return. `int *p = (int *)malloc(10 * sizeof(int));` Now we have 10 elements that are 4 bytes and pointer arithmetic will work properly because the compiler understands our pointer is an integer type.  
After we are finished using our memory block of type integer we will need to return the memory back to the operating system. By using the `free()` subroutine. `free(p);`

| File | Description |
| -------- | -------- |
| 0-create_array.c | Function that creates an array of chars |
| 1-strdup.c | Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter |
| 2-str_concat.c | Function that concatenates two strings |
| 3-alloc_grid.c | Function that returns a pointer to a 2 dimensional array of integers |
| 4-free_grid.c | Function that frees a 2 dimensional grid previously created by your alloc_grid function |
| 5-argstostr.c | Function that concatenates all the arguments of program |
| 100-strtow.c | Function that splits a string into words |

```
uname -a
```
Linux vagrant-ubuntu-trusty-64 3.13.0-170-generic #220-Ubuntu SMP Tue 1:15:04 UTC 2020 x86_64 x86_64 x86_64 GNU/Linux

