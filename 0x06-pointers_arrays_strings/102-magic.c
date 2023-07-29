#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a[5];
int *p;
int m;

a[2] = 1024;
p = &m;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
