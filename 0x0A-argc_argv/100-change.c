
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
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		puts("0");
	else
	{
		int change = atoi(argv[1]);
		int coins = make(change);

		printf("%d\n", coins);
	}
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

	int q = 25, d = 10, n = 5, t = 2, count = 0, coins = c;

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
