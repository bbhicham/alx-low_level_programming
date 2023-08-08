#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2D array of integers and initializes to 0.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: Pointer to the 2D array, or NULL if allocation fails or if width or height is 0 or negative.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

 
    if (width <= 0 || height <= 0)
        return NULL;

    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}
