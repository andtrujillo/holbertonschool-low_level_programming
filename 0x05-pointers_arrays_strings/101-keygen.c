#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

	srand(time(0));

	char alpha_nums[62] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghipqrstuvwxyz0123456789";
	char arr[2048];
	int sum = 0, i = 0, num = 0, k = 0;

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
