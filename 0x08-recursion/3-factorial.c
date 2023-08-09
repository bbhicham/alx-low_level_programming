#include "main.h"
/**
 * factorial - Returns  factorial the length of a string.
 * @n: input
 *
 * Return: Returns  factorial.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
