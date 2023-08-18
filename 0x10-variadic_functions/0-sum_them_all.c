#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: input
 * @...: args
 * Return:  returns the sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int sum, i;
va_start(arg, n);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}
