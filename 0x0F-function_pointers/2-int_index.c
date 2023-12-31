#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: input
 * @size: input
 * @cmp: input
 * Return: return index place if comparison = true, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
