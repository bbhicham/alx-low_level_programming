#include "main.h"

/**
 * print_alphabet_x10 - print 10 for all alphabet in lowercase
 */
void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}

}
