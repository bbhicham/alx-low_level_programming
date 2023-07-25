#include "main.h"
/**
 * print_rev - print rev s
 * @s: input string to printed
 */
void print_rev(char *s)
{
int i;
i = _strlen(s);

while (i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
