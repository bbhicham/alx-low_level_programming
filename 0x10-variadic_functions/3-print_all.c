#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separ = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'i':
					printf("%s%d", separ, va_arg(args, int));
					break;
				case 'c':
					printf("%s%c", separ, va_arg(args, int));
					break;

				case 'f':
					printf("%s%f", separ, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separ, str);
					break;
				default:
					i++;
					continue;
			}
			separ = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
