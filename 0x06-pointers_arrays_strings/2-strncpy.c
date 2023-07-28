#include "main.h"

/**
 * _strncpy - should work exactly like strncpy
 * @dest: string pointed
 * @src: string pointed
 * @n: bytes from src
 * Return: return pointer to desc
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
