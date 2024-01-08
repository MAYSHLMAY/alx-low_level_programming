#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b
 * @s: pointer to array of chars
 * @b: character to replace array of chars
 * @n: index
 * Return: *s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	for (; i < n; s++)
		*s = b;
	return (s);
}
