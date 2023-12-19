#include "main.h"

/**
 * n_times_table - function that prints the n times table
 *
 * @n: n times table
 *
*/

void print_times_table(int n)
{
	 int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			 for (j = 0; j <= n; j++)
			{
				int result = i * j;

				if (result < 10)
				{
					 _putchar(' ');
					 _putchar(result + '0');
				}
				else
				{
					_putchar((result / 10) + '0');
					 _putchar((result % 10) + '0');
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
}
