#include "main.h"

/**
 * print_alphabet - a-z
 * @c: f
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}

_putchar('\n');
}
