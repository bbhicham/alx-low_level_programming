#include <stdio.h>

/**
 * main - 100 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    unsigned long int i;
    unsigned long int first = 1;
    unsigned long int second = 2;
    unsigned long int limit = 1000000000;
    unsigned long int first_high;
    unsigned long int first_low;
    unsigned long int second_high;
    unsigned long int second_low;

    printf("%lu", first);

    for (i = 1; i < 91; i++)
    {
        printf(", %lu", second);
        second += first;
        first = second - first;
    }

    first_high = (first / limit);
    first_low = (first % limit);
    second_high = (second / limit);
    second_low = (second % limit);

    for (i = 92; i < 99; ++i)
    {
        printf(", %lu", second_high + (second_low / limit));
        printf("%lu", second_low % limit);
        second_high = second_high + first_high;
        first_high = second_high - first_high;
        second_low = second_low + first_low;
        first_low = second_low - first_low;
    }
    printf("\n");
    return (0);
}
