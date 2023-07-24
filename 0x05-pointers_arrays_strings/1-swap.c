#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a: address of var in pointer variable a
 * @b: address of var in pointer variable b
 */
void swap_int(int *a, int *b)
{
int c = *a;

*a = *b;
*b = c;
}
