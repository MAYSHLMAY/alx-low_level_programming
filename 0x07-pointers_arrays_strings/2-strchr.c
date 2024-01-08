#include "main.h"
/**
 * _strchr - prints found c
 * @s: pointer to char
 * @c: char param to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != '\0') && (s[i] != c); i++)
		;

	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
