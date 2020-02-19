#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point for function that cracks file
* Return: 0 (Success)
*/
int main(void)
{
	char _nums[124] =	"abcdefghipqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char arr[256];
	int sum = 0, i, num;
	char k;

	srand(time(0));

	for (i = 0; sum < (2772 - 'z');)
	{
		num = rand() % 62;
		if (sum + _nums[num] >= 2772)
			continue;
		else
		{
			arr[i] = _nums[num];
			sum += arr[i];
			i++;
		}
	}
	k = 2772 - sum;
	arr[i] = k;
	sum += k;
	printf("%s", arr);
	return (0);
}
