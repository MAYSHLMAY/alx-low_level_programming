#include "stdio.h"

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	int i;

	unsigned long int a, b, c;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;

		if (b < a)
		{
			b >>= 1;
			a >>= 1;
		}

	}
	printf("\n");
	return (0);
}
