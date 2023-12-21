#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
        int i, j;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 15; ch++)
                {
                        if (ch >= 10)
                                _putchar((ch / 10) + '0');
                        _putchar((ch % 10) + '0');
                }
                _putchar('\n');
        }
}
