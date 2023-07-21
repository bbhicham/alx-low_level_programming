#include "main.h"

/**
 * print_line - that draws a straight line in the terminal
 * @n: n is the number of the character should be printed
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
