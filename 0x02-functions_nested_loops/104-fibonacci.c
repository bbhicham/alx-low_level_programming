#include <stdio.h>

/**
 * main - prints the first 100 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned long int num_fibonacci = 100;
    unsigned long int fib_prev = 1;
    unsigned long int fib_current = 2;
    unsigned long int limit = 1000000000;
    unsigned long int fib_prev_high;
    unsigned long int fib_prev_low;
    unsigned long int fib_current_high;
    unsigned long int fib_current_low;
    unsigned long int i;
    printf("%lu", fib_prev);

    for (i = 1; i < num_fibonacci; i++)
    {
        printf(", %lu", fib_current);
        fib_current += fib_prev;
        fib_prev = fib_current - fib_prev;
    }

    fib_prev_high = (fib_prev / limit);
    fib_prev_low = (fib_prev % limit);
    fib_current_high = (fib_current / limit);
    fib_current_low = (fib_current % limit);

    for (i = num_fibonacci + 1; i < num_fibonacci + 8; ++i)
    {
        printf(", %lu", fib_current_high + (fib_current_low / limit));
        printf("%lu", fib_current_low % limit);
        fib_current_high = fib_current_high + fib_prev_high;
        fib_prev_high = fib_current_high - fib_prev_high;
        fib_current_low = fib_current_low + fib_prev_low;
        fib_prev_low = fib_current_low - fib_prev_low;
    }
    printf("\n");
    return 0;
}
