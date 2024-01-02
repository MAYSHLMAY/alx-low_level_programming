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

	chat *p = s;

	while (*p != '\0')
	{
		p++;
		len++;
	}
	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
