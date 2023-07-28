#include "main.h"

/**
 * reverse_array - everses the content of an array of integers.
 * @a: input list of int
 * @n: n is the number of elements of the array
 */
void reverse_array(int *a, int n)
{
int i, j;
for (i = 0; i < n / 2; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
