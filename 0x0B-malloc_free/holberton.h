#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c);
int *_memset(int *s, int b, unsigned int n);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char *_memcpy(char *dest, char *src, int n);
char **strtow(char *str);
int **alloc_grid(int width, int height);
int _strlen(char *s);
void free_grid(int **grid, int height);
#endif
