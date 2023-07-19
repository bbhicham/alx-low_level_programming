#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
int fibNumbers[50];
fibNumbers[0] = 1;
fibNumbers[1] = 2;
int i;
for (i = 2; i < 50; i++)
{
fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2];
}

for (i = 0; i < 50; i++)
{
printf("%d", fibNumbers[i]);
if (i < 49)
{
printf(", ");
}
}
printf("\n");
return (0);

}
