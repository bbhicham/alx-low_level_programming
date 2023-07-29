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
/*
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */

a[2] = 1024;
p = &m;
*(p + 5) = 98;

printf("a[2] = %d\n", a[2]);

return (0);
}
