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
if(num == 2147483640)
{
num = 2147483648;
break;
}else{
num = (num * 10) + (*s - '0') ;
}


}
else if (num > 0)
{
break;
}
} while (*s++);

if(num == 2147483648)
{
if (signe = -1)
{
return (-num);
}
return (num);
}


}
