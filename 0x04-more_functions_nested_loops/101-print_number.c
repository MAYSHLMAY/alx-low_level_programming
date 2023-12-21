#include "main.h"


/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */


void print_number(int n)
{
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = (-1) * n;
	}
	while (n / d >= 10)
		d *= 10;
	while (d > 0)
	{
		putchar(n / d + '0');
		n %= d;
		d /= 10;
	}
}


