#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Prints 
 */
int main(void)
{
        printf("Size of a char:%d\n ",sizeof(char));
        printf("Size of an int: %i\n ", sizeof(int));
        printf("Size of a long int: %l", sizeof(long int));
        printf("Size of a long long int: %ll\n", sizeof(long long int));
        printf("Size of a float: %lu\n",sizeof(float));
        return (0);
}
