#include "holberton.h"
/**
* _puts - function that prints a string
* to stdout.
* @str: string to be printed
* Return: none (void)
*/
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
++str;
}
