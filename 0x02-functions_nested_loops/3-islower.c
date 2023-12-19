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
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	return (0);
}


