#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2D grid of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D grid or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* allocate memory for row pointers */
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);

    /* allocate each row */
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            /* free previously allocated rows */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }

        /* initialize row cells to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return (grid);
}

