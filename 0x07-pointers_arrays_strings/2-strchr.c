#include "main.h"
/**
 * _strchr - fill a block of memory with a specific value
 * @s: input
 * @c:input
 *
 * Return: first occurrence of the char c in the string s, or NULL
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i] >= '\0'  ; i++)
{
if (s[i] == c)
{
return (s + i);
}

}

return ('\0');
}
