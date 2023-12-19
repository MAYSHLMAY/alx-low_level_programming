#include "stdio.h"

/**
 * main - write a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int first = 1, second = 2, sum = 0, sum2 = 2;

	while (sum < 4000000)
	{
		sum = first + second;
		first = second;
		second = sum;
		if (sum % 2 == 0)
			sum2 += sum;
	}
	printf("%li\n", sum2);
	return (0);
}
