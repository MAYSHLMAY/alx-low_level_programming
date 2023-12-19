#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 *
*/

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	int j;

		for (j = 0; j <= 9; j++)
		{
			if ((j * i) <= 9)
			{
				_putchar(' ');
				_putchar((j * i) + '0');
			}
			else
			{
				_putchar(((j * i) / 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
