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
int r;

do {
if (*s == '-')
{
signe *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
} while (*s++);

r = num *signe;
return (r);
}
