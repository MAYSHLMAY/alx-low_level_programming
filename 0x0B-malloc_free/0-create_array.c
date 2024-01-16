
#include "main.h"
#include "stdlib.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *p;
        unsigned int i = 0;

	if (size == 0)
		return NULL;
	p = (char *) malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
  		p[i] = c;
	p[i] = '\0';
	return (p);
}

