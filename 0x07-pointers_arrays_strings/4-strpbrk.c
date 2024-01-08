#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		unsigned int c2 = 0;

		while (accept[c2] != '\0')
		{
			if (accept[c2] == *s)
				return (s);
			c2++;
		}
		s++;
	}
	return (NULL);
}
