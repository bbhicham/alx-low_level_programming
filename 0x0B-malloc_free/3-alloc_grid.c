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

    // Check if width or height is 0 or negative
    if (width <= 0 || height <= 0)
        return NULL;

    // Allocate memory for rows (height)
    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    // Allocate memory for each row (width) and initialize elements to 0
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            // If allocation fails, free previously allocated memory and return NULL
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        // Initialize elements to 0
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}
