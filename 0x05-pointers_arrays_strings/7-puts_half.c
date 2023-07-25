#include "main.h"
/**
 * puts_half - print last half of array
 * @str: input string to printed
 */
void puts_half(char *str)
{
int i = 0;
int j;
while (str[i])
{
i++;
}
for (j = (i / 2); j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
