#include "main.h"
/**
 * _strncat - that concatenates two strings.
 * @dest: string pointed
 * @src: string pointed
 * @n: bytes from src
 * Return: return pointer to desc
 */
char *_strncat(char *dest, char *src, int n)
{
int count1, count2;

count1 = 0;

while (dest[count1])
{
count1++;
}

for (count2 = 0; src[count2] != '\0' && count2 < n; count2++)
{
dest[count1++] = src[count2];
}
dest[count1] = '\0';

return (dest);

}
