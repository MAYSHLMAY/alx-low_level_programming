#include "stdio.h"

/**
 * _islower - function to check
 *            if a character is
 *	      lowercase
 * @c: checks input of function
 *
 *Return: returns 1 if `c` is lowercase
 *	  otherwise always 0 (success)
*/

int _islower(int c)
{
	int i;
	for (i = 97; i < 122; i++)
	{
		if (_putchar(i) == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}


