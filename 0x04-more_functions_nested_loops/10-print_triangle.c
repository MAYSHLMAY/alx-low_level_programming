#include "main.h"




void print_triangle(int size)
{
	int i,j;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
		_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
