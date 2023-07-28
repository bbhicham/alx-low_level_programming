#include "main.h"

/**
 * _strcmp - that compares two strings.
 * @s1: string pointed 1
 * @s2: string pointed 2
 * Return: return int
 */
int _strcmp(char *s1, char *s2)
{
int e = 0;
int i = 0;
while (s1[i])
{
if (s1[i] != s2[i])
{
e = ((int)s1[i] - 48) - ((int)s2[i] - 48);
break;
}
i++;
}
return (e);
}
