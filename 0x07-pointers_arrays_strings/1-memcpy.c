#include "main.h"
/**
 * _memcpy - fill a block of memory with a specific value
 * @dest: starting address of memory to be filled
 * @src: memory where is copied
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n  ; i++)
{
dest[i] = src[i];
}

return (dest);
}
