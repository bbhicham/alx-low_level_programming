#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated space in bytes.
 * @new_size: New size of the memory block in bytes.
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
char *old_char_ptr;
char *new_char_ptr;
unsigned int i;
if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size <= old_size)
return (ptr);

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_char_ptr = (char *)ptr;
new_char_ptr = (char *)new_ptr;
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
new_char_ptr[i] = old_char_ptr[i];
}
free(ptr);

return (new_char_ptr);
}
