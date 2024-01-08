#include "main.h"


/**
* _strspn - function Gets the length of a prefix substring.
* @s: String where substring will look.
* @accept: Substring of accepted chars.
* Return: Length.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c1 = 0;

	while (*s != '\0')
	{
		unsigned int c2 = 0;

		while (accept[c2] != '\0')
		{
			if (*s == accept[c2])
			{
				c1++;
				break;
			}
			c2++;
		}
		if (accept[c2] == '\0')
			break;
		s++;
	}
	return (c1);
}
