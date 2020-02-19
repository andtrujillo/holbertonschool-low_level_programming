#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	srand(time(0));

	char *alpha_nums = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghipqrstuvwxyz0123456789";
	char arr[2048];
	int sum = 0;
	int i = 0;
	int num = 0;
	int k = 0;

while (sum <  2772 - 'z')
{
	num = rand() % 62;
	sum += alpha_nums[num];
	arr[i] = alpha_nums[num];
	i++;
}
	k = 2772 - sum;
	arr[i] = k;

	printf("%s", arr);
	return (0);
}
