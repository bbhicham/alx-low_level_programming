#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int number = 612852475143;
long int maxPrime = -1;
long int i;

while (number % 2 == 0)
{
maxPrime = 2;
number /= 2;
}

for (i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
maxPrime = i;
number /= i;
}
}

if (number > 2)
{
maxPrime = number;
}

printf("%ld\n", maxPrime);

return (0);
}
