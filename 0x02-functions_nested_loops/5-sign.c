#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @n: checks input of function
 *
 * Return:
 *	 -> returns 1 and prints + if n is > zero
 *	 ->  returns 0 and prints 0 if n is zero
 *	 -> returns -1 and prints - if n is < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
