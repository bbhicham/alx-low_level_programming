#include "main.h"
/**
 * puts_half - print last half of array
 * @str: input string to printed
 */
void puts_half(char *str)
{
int i = 0;
int j, star;
while (str[i])
{
i++;
}
star = (i % 2 == 0) ? (i / 2) : ((i - 1) / 2);
for (j = star; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
