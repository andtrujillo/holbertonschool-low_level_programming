#ifndef HOLBERTON_H
#define HOLBERTON_H

/* int */
int _strlen(char *str);
int _strcmp(char *s1, char *s2);

/* char */
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *cap_string(char *);
char *string_toupper(char *);
char *rot13(char *);
char *leet(char *);

/* void */
void reverse_array(int *a, int n);
void print_number(int n);
#endif
