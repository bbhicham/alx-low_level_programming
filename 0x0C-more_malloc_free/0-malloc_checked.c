#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
void *ptrc;

ptrc = malloc(b);

if (ptrc == NULL)
exit(98);

return (ptrc);
}
