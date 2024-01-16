#include "main.h"

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	len = 0;
	i = 0;

	while (str[len])
		len++;

	dup = (char *)malloc(sizeof(char) * len);

	while (i < len)
	{
		len[i] = str[i];
		i++;
	}

	return (str);
}
