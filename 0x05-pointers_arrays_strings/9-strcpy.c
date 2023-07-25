#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: string pointed
 * @src: string pointed
 * Return: return pointer to desc
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
