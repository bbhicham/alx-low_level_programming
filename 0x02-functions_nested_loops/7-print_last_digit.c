#include "main.h"

/**
 * print_last_digit - that prints last digit of number.
 * @n: number
 *
 * Return:last digital of number
 */
int print_last_digit(int n)
{
int m;
if (n < 0)
{
n = -n;
}

m = n % 10;

if (m < 0)
{
m = -m;
}

_putchar('0' + m);
return (m);
}
