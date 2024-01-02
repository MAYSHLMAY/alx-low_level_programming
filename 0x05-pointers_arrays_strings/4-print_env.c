#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: None
*/

void print_rev(char *s)
{
	int len;
	int i;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	for (i = len; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
