#include "main.h"

#include <stdio.h>
/**
 * _strspn -  length of a prefix substring
 * @s: input
 * @accept:input
 *
 * Return: length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int c = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
c++;
break;
}
else if (accept[j + 1] == '\0')
{
return (c);
}
}
}
return (c);
}
