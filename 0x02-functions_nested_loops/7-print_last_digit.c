#include "main.h"

/**
 * print_last_digit - that prints last digit of number.
 * @n: number
 *
 * Return:last digital of number
 */
int print_last_digit(int n)
{
if (n < 0)
{
n = -n;
}
_putchar('O' + (n % 10));
return (n % 10);
}
