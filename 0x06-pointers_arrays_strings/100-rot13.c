#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @s: An input string to encode using rot13
 * Return: An encode string
 */


char *rot13(char *s)
{
        int i;
        int j;
        char main[] = "ABCDEFJHIJKLMNOPQRSTUVWXYZabcdefjhijklmnopqrstuvwxyz";
        char rotter[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; j < 52; j++)
                {
                        if (s[i] == main[j])
                        {
                                s[i] = rotter[j];
                                break;
                        }
                }
        }
        return (s);
}
