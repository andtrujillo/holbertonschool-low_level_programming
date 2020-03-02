
#include "holberton.h"

/**
 * main - entry point to our program that takes one command
 * line argument when run and converts to integer
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char **argv)
{

	if (argc != 2)
		printf("Error\n");

	int change = _atoi(argv[1]);
	int coins = make(change);

	printf("%d\n", coins);
	return (0);
}
/**
 * make - function that returns minimum amount of coins needed
 * to make change from user argument amount of change in cents
 * @c: integer of cents
 * Return: integer amount of coins needed to complete change in
 * minimum number of coins in denominations { 1, 2, 5, 10, 25 }
 */
int make(int c)
{

	int q = 25, d = 10, n = 5, t = 2, p = 1, count = 0, coins = c;

	while (coins >= q)
	{
		coins = coins -  q;
		count++;
		if (coins == 0)
			return (count);
	}
	while (coins >= d)
	{
		coins -= d;
		count++;
		if (coins == 0)
			return (count);
	}
	while (coins >= n)
	{
		coins -= n;
		count++;
		if (coins == 0)
			return (count);
	}
	while (coins >= t)
	{
		coins -= t;
		count++;
		if (coins == 0)
			return (count);
	}
	while (coins)
	{
		coins--;
		count++;
	}
	return (count);
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
