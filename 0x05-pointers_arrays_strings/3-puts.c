#include "main.h"
/**
 * _puts - print str
 * @str: input string to printed
 */
void _puts(char *str)
{
int i;
for (i = 0;  *str != '/0'; str++)
{
_putchar(*str + 0);
}
_putchar('\n');
}
