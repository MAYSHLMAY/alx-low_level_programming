#include "stdio.h"

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * @void: no argument
 * Return: 0
 */

int main(void)
{
	long int first = 0;

	long int second = 1;

	long int sum, i;

	for (i = 0; i < 50; i++)
	{
		sum = first + second;
		printf("%ld", sum);
		if (i != 49)
			printf("%s", ", ");
		first = second;
		second = sum;
	}
	printf("\n");
	return (0);
}
