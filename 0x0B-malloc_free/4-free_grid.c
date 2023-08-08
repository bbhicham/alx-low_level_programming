#include <stdlib.h>

/**
 * free_grid - Deallocates the memory of a 2D grid created by alloc_grid.
 * @grid: The address of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int i;


if (grid != NULL)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
}
