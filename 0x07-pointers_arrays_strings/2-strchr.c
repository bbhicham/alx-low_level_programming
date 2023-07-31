#include "main.h"
/**
 * _memcpy - fill a block of memory with a specific value
 * @s: input
 * @c:input
 *
 * Return: first occurrence of the character c in the string s, or NULL if the character
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'  ; i++)
{
if(s[i]==c)
{
return(s + i);
}

}

return ('\0');
}
