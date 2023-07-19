#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
long fibNumbers[50];
int i;
fibNumbers[0] = 1;
fibNumbers[1] = 2;

for (i = 2; i < 50; i++)
{
fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2];
}

for (i = 0; i < 50; i++)
{
printf("%lu", fibNumbers[i]);
if (i < 49)
{
printf(", ");
}
}
printf("\n");
return (0);

}
