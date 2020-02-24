#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - function that prints the chessboard.
 *@a: char
 *@size: int
 *Return: void
 */

void print_diagsums(int *a, int size)
{
int x, sum = 0, sum_inv = 0;

for (x = 0, sum = 0; x < (size * size) ; x += size + 1)
sum += a[x];

for (x = size - 1, sum_inv = 0; x <= (size * size) - 2; x += size - 1)
sum_inv += a[x];

printf("%d, %d\n", sum, sum_inv);
}
