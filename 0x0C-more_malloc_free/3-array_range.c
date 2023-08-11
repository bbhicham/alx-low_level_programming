#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
return (NULL);

arr = malloc(sizeof(int) * (max - min + 1));

if (arr == NULL)
return (NULL);

for (i = 0; min <= max; i++, min++)
arr[i] = min;

return (arr);
}
