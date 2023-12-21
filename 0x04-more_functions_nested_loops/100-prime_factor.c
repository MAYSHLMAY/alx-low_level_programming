#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int factor, n = 612852475143;

	while (factor <= n)
	{
	if (n % factor == 0)
		n /= factor;
	else
		factor++;
	}
	printf("%lu\n", n);
	return (0);
}
