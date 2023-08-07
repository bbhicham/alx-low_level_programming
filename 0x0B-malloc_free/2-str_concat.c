#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concat
 * @s1: input
 * @s2: input
 * Return: pointer should point to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
char *temp;
int i, j;


i = 0;
j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[i] != '\0')
i++;

while (s2[j] != '\0')
j++;
temp = malloc(sizeof(char) * (i + j + 1));
if (temp == NULL)
return (NULL);
i = 0;
j = 0;
while (s1[i] != '\0')
{
temp[i] = s1[i];
i++;
}

while (s2[j] != '\0')
{
temp[i] = s2[j];
j++;
i++;
}
temp[i] = '\0';

return (temp);
}
