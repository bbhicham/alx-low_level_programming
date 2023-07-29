#include "main.h"

/**
 * rot13 - tthat encodes a string into 1337.
 * @str: input String.
 *
 * Return: A pointer to the changed string.
 */
char *rot13(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
char c = str[i];

if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
str[i] = (c - base + 13) % 26 + base;
}
}

return (str);
}
