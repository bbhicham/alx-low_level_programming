#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int sum;
    char random_char;
    srand(time(NULL));
    while (sum <=2645)
    {
        random_char = rand() % 128;
        sum += random_char;
        putchar(random_char );
    }
    putchar(2772 - sum);

    return 0;
}
