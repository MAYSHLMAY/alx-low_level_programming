#include "main.h"
#include "stdlib.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	len = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = (char *)malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while (i < len && str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';

	return (dup);
}
