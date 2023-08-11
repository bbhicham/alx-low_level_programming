#include <stdlib.h>
/**
 * _calloc -  allocates memory for an array, using malloc.
 * @nmemb: elements of SIZE bytes each
 * @size: input.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *coll;
if (nmemb == 0 || size == 0)
{
return (NULL);
}

coll = malloc(nmemb * size);
for (i = 0; i < size; i++)
{
coll[i] = 0;
}


if (coll == NULL)
{
return (NULL);
}

return (coll);
}
