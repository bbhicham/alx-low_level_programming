#include <stdio.h>


/**
 * main - sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int j;
unsigned long int k;
unsigned long int n;
unsigned long int sum;


j = 1;
k = 2;
sum = 0;


for (i = 1; i < 50; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
n = j + k;
j = k;
k = n;
}


printf("%lu\n", sum);


return (0);
}
