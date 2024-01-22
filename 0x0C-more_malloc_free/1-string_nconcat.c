#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - Concatenates two strings
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of characters
 *
 * Return: Pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0;
	unsigned int s2_length = 0;
	unsigned int i, j = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length;

	result = (char *)malloc((s1_length + n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[s1_length + j] = s2[j];

	result[s1_length + n] = '\0';

	return (result);
}
