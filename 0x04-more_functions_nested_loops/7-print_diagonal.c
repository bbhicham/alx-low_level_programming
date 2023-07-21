#include "main.h"

/**
 * print_diagonal - that draws a diagonal line on the terminal.
 * @n: is the number of times the character "\"
 */
void print_diagonal(int n)
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
putchar(' ');
}

putchar('\\');

if (i != (n - 1))
{
putchar('\n');
}

}

putchar('\n');
}
