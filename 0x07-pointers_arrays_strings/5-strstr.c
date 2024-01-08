#include "main.h"
#include <stddef.h>

/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/


char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		unsigned int c1 = 0;
		unsigned int c2 = 0;

		while (needle[c2] != '\0' && haystack[c1] == needle[c2])
		{
			c1++;
			c2++;
		}

		if (needle[c2] == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
