#include "main.h"

/**
 * rot13 - that prints an integer
 * @str: input int to be print
 */
void print_number(int n) {
    unsigned int n1;

	n1 = n;

    if (n < 0) {
        _putchar('-');
        n1 = -n;
    }

    if (n / 10 != 0) {
        print_number(n1 / 10);
    }

    _putchar(n1 % 10 + '0');
}
