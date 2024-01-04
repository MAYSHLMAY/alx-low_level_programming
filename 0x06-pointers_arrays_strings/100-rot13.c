#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */


char *rot13(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		if ((*end >= 'a' && *end <= 'm') || (*end >= 'A' && *end <= 'M'))
			*end += 13;
		else if ((*end >= 'n' && *end <= 'z') || (*end >= 'N' && *end <= 'Z'))
			*end -= 13;
		end++;
	}
	return (s);
}
