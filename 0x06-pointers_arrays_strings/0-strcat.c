#include "main.h"

/**
 * *_strcat - that concatenates two strings.
 * @dest: string pointed
 * @src: string pointed
 * Return: return pointer to desc
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int l = 0;

char tem[98];

while (dest[i] != '\0')
{
tem[i] = dest[i];
i++;
}
j = i;
while (src[l] != '\0')
{
tem[j] = src[l];
j++;
l++;
}

l = 0;
i = 0;
while (tem[i] != '\0')
{
dest[i] = tem[i];
i++;
l++;
}


dest[l] = '\0';

return (dest);

}
#include "main.h"

/**
 * *_strcat - that concatenates two strings.
 * @dest: string pointed
 * @src: string pointed
 * Return: return pointer to desc
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
int l = 0;

char tem[98];

while (dest[i] != '\0')
{
tem[i] = dest[i];
i++;
}
j = i;
while (src[l] != '\0')
{
tem[j] = src[l];
j++;
l++;
}

l = 0;
i = 0;
while (tem[i] != '\0')
{
dest[i] = tem[i];
i++;
l++;
}


dest[l] = '\0';

return (dest);

}
