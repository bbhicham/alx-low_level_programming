#include "main.h"

/**
 * rot13 - tthat encodes a string rot13.
 * @str: input String.
 *
 * Return: A pointer to the changed string.
 */
char *rot13(char *str)
{
char *result = str;
char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char arot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*str)
{
char c = *str;
char *pos = alph;

while (*pos && *pos != c)
{
pos++;
}

if (*pos)
{
*str = arot[pos - alph];
}

str++;
}

return (result);
}
