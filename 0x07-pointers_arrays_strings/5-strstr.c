#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *ta = haystack;
char *tb = needle;

while (*ta == *tb && *tb != '\0')
{
ta++;
tb++;
}

if (*tb == '\0')
return (haystack);
}

return (0);
}
