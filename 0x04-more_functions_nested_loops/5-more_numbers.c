#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
int i;
i = 0;

for (i = 0; i < 11; i++)
{
for (i = 0; i <= 14; i++)
{
_putchar('0' + i);
}
_putchar('/n');
}

}
