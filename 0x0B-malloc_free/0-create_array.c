#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: input
 * @c: input
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *str;
unsigned int i;


if (size == 0)
return ('\0');

str = malloc(sizeof(char) * size);
for (i = 0; i < size; i++)
str[i] = c;

str[i] = '\0';
return (str);
}
