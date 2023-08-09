#include "main.h"

/**
 * is_prime_recursive - Recursive helper function to check if a number is prime.
 * @n: The number to check.
 * @divisor: The current divisor being tested.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_recursive(int n, int divisor)
{
    if (n <= 1)
        return 0;
    if (divisor == 1)
        return 1;
    if (n % divisor == 0)
        return 0;
    return is_prime_recursive(n, divisor - 1);
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number, otherwise return 0.
 * @n: The input integer.
 *
 * Return: 1 if prime, 0 if not prime.
 */
int is_prime_number(int n)
{
    return is_prime_recursive(n, n - 1);
}
