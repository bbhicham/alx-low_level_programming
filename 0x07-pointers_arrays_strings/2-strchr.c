#include "main.h"
/**
 * _memcpy - fill a block of memory with a specific value
 * @s: input
 * @c:input
 *
 * Return: changed array with new value for n bytes
 */

char *_strchr(char *s, char c)
{
unsigned int i;
unsigned int r = 0;
for (i = 0; s[i] ; i++)
{
if(s[i]==c)
{
return(&s[i]);
}

}

return (0);
}
