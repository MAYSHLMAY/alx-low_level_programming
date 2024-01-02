#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: None
*/

void swap_int(int *a, int *b)
{
	int temp_variable;

	temp_variable = *a;
	*a = *b;
	*b = temp_variable;
}
