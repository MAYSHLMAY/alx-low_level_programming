#include "main.h"

void rev_string(char *s)
{
	int len = 0;

	int i;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		_putchar(*(s + i));
}
