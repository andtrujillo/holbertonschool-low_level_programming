
#include <stdio.h>
/**
 * main - program that prints its name followed by a new line
 * @argc: argument count - number of arguments passed to our shell interpreter
 * from the command line
 * @argv: argument vector - an array of char *s delimited by whitespace
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int i = argc - 1;
if (i > 0)
return (i);
else
printf("%s\n", argv[i]);
return (0);
}
