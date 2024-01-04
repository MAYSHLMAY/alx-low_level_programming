#include <stdio.h>
#include <string.h>

/**
 * rot13 - encodes a string in rot13
 * n1
 * n3
 * size_r
 * @r: string to be encoded
 * Return: the resulting strring
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int sum;
	int i, j, k;

	if (len1 > size_r - 1 || len2 > size_r - 1)
   	     return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	r[size_r - 1] = '\0';

	while (i >= 0 || j >= 0)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		i--;
		j--;
		k--;
	}

	if (carry > 0)
	{
		if (k < 0)
			return 0;
        r[k] = carry + '0';
	}

	return r;
}
