#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
/**
 * free_grid - Frees the memory allocated for a 2-dimensional grid.
 * @grid: Pointer to the grid to be freed.
 * @height: Height of the grid.
 */

void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
{
return;
}

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
