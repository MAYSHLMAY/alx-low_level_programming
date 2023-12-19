#include "main.h"

/*
 * print_alphabet_x10 - a function to print 26 alphabets 10 times downward
 *
*/

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar(10);
	}
}
