#include "main.h"

char *_strdup(char *str)
{
	str = (char *)malloc(sizeof(char) * strlen(str));
	return (str);
}
