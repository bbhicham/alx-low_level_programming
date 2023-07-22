#include "main.h"
/**
 * print_number - print any int
 * @n: n int well be printed
 */
void print_number(int n)
{
int length = 0;
unsigned int number, len;
int i, p, j;
if (n < 0)
{
_putchar('-');
number = (unsigned int)(-n);
len = (unsigned int)(-n);
}
else
{
number = n;
len = n;
}
if (len == 0)
length = 1;
else
{
for (length; len != 0; length++)
{
len /= 10;
}
}
for (i = length - 1 ; i >= 0; i--)
{
p = 1;
if (i >= 1)
{
for (j = 0; j < i; j++)
{
p *= 10;
}
if (i == length - 1)
_putchar('0' + (number / p));
else
_putchar('0' + ((number / p) % 10));
}
else
_putchar('0' + (number  % 10));
}
}
