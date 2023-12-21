#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int factor = 2, n = 612852475143;

	while (factor <= 12057)
	{
	if (n % factor == 0)
		n /= factor;
	else
		factor++;
	}
	printf("%lu\n", n);
	return (0);
}
