#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: None
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str + 0);
	_putchar('\n');
}
