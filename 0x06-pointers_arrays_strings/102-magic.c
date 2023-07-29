#include <stdio.h>

int main(void)
{
int a[5];
int *p;
int m;

a[2] = 1024;
p = &m;
/*
 * - magic
 * - code
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
*(p + 5) = 98;
/* print a[2] */
printf("a[2] = %d\n", a[2]);
return (0);
}
