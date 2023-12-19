#include "stdio.h"

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * @void: void
 * Return: 0 Success
 */

int main(void)
{
	int pt = 1024;

	int sum = 0;

	while (pt >= 3)
	{
		--pt;
		if (pt % 3 == 0 || pt % 5 == 0)
			sum += pt;
	}
	printf("%d", sum);
	return (0);
}

