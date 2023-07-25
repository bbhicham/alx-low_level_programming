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
int l = 0;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
l++;
}
dest[l] = '\0';
return (dest);
}
