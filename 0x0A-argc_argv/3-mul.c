
#include <stdio.h>
int check_argc(int a);
int multiply_two_dig(int a, int b);
int _atoi(char *s);

/**
 * main - entry point of function that only multiplies two numbers
 * @argc: integer that is the amount of arguments recieved by main
 * @argv: double pointer to one dimensional array of multiple string
 * arguments
 * Return: 0 on success otherwise 1
 */
int main(int argc, char **argv)
{
	int i = argc;
	if (!check_argc(i))
		return (1);
	
	int a = _atoi(argv[1]);
	int b = _atoi(argv[2]);

	printf("%d\n", multiply_two_dig(a, b));
	return (0);
}
/*
 * multiply_two_dig - multiplies two digits
 * @o: integer to do the long sum, quickly
 * @l: integer to do the long sum, as well
 * Return: integer multiplied by two digits
 */
int multiply_two_dig(int o, int l)
{
	return (o * l);
}
/*
 * check_argc - checks argument count, very good
 * @argumentative: no like we reject
 * Return: integer if ok, 1 ok, else 0 not ok, ok.
 */
int check_argc(int argumentative)
{
	int good = 1;
	if (!argumentative > 3 && !argumentative < 3)
		return (good);
	else
		puts("Error");
		return (0);
}
/**
* _atoi - Function that converts a character array to an integer
* @str_to: String to be converted to unsigned integer
* Return: integer
*/
int _atoi(char *str_to)
{
	int sign_count = 1;
	unsigned int result = 0;
	int work = 0;

	for (; *str_to != '\0'; str_to++)
	{
		if (*str_to == '-')
		{
			sign_count *= -1;
		}
		if (*str_to >= '0' && *str_to <= '9')
		{
			work = 1;
			result = ((result * 10) + (*str_to - '0'));
		}
		if (*str_to < '0' || *str_to > '9')
		{
			if (work)
				break;
		}
	}
	if (result == 0)
		result = 0;

	return (result * sign_count);
}
