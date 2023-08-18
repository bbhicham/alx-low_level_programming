#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @n: input
 * @...: args
 * @separator: input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
va_start(arg, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(arg);
}
