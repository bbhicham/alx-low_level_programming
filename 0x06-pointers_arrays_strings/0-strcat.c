#include "main.h"
#include <stdio.h>
/**
 * *_strcat - that concatenates two strings.
 * @dest: string pointed
 * @src: string pointed
 * Return: return pointer to desc
 */
char *_strcat(char *dest, char *src)
{
int i, j;
int l = 0;

char tem[98];
for (i = 0; dest[i] != '\0'; i++)
{
tem[i] = dest[i];

}

for (j = i; src[l] != '\0'; j++)
{
tem[j] = src[l];
l++;
}
l=0;
for (i = 0; tem[i] != '\0'; i++)
{
dest[i] = tem[i];
l++;
}

dest[l] = '\0';

return (dest);

}
