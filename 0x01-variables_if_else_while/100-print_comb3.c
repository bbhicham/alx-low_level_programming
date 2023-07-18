#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int sum;
int t = 1;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
sum = i * 10 + j;
if (sum != 0)
{
if (sum % 10 == 0 && i > 0)
{
j = t;
t++;
}
else
{
if (sum != 1)
putchar(' ');
putchar('0' + i);
putchar('0' + j);
if (sum != 89)
putchar(',');
}
}
}
}

putchar('\n');
return (0);
}
