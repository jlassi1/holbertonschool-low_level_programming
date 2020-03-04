#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/*
 *free_grid - free a grid
 *@grid : pointer of int
 *@height : integer
 *Return : NULL
 */
void free_grid(int **grid, int height)
{
int x = 0;
for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}
