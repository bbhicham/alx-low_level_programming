#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: size of triangle
 */
void print_triangle(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if ((size - 1 - j) <= i)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}

if (i != (size - 1))
{
putchar('\n');
}

}

putchar('\n');
}
