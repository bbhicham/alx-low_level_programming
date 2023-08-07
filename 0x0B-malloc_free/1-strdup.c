#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: input
 * Return: On success the returns a pointer to the duplicated string or null
 */
char *_strdup(char *str)
{
char *temp;
int i, j;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;

temp = malloc(sizeof(char) * (i + 1));

if (temp == NULL)
return (NULL);

for (j = 0; str[j]; j++)
temp[j] = str[j];

return (temp);
}
