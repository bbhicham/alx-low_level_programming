#include "main.h"

/**
 * rot13 - that prints an integer
 * @str: input int to be print
 */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}
