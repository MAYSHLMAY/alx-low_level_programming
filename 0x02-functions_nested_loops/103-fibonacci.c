#include "stdio.h"

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * @void: no argument
 * Return: 0
 */

int main(void)
{
	long long int first = 0;

	long long int second = 1;

	long long int sum, sum2, i;

	for (i = 0; i < 4000000; i++)
	{
		sum = first + second;
		if (sum / 2 == 0)
			sum2 += sum
		first = second;
		second = sum;
	}
	printf("%d", sum2);
	printf("\n");
	return (0);
}
