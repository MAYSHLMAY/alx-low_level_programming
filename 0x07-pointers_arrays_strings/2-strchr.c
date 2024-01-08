#include "main.h"

/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char param to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			return (NULL);
		s++;
	}
}
