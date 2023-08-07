#include "main.h"

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

str = malloc(sizeof(char) * size);
if (size == 0)
return ('\0');

for (i = 0; i < size; i++)
str[i] = c;

return (str);
}
