#include "main.h"
/**
 * _atoi -  function that convert a string to an integer
 *
 * @s: string pointed
 *
 * Return: integer convert from s
 */
int _atoi(char *s)
{
int num = 0;
    int signe = 1;
    int is_min_int = 0;

    if (*s == '-')
    {
        signe *= -1;
        s++;
    }

    while (*s)
    {
        if (*s >= '0' && *s <= '9')
        {
            int digit = *s - '0';

            // Check for overflow before updating num
            if (!is_min_int && (num > (2147483647 - digit) / 10))
            {
                is_min_int = 1; // Handle the special case of INT_MIN
                num = 2147483647;
                break;
            }

            num = (num * 10) + digit;
        }
        else
        {
            break;
        }
        s++;
    }

    return (num * signe);
}
