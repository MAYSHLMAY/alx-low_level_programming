#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print n to 98 counts
 * separated by comma, followed
 * by space and number should be
 * printed in order
 *
 * @n: input
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", 98);
}
