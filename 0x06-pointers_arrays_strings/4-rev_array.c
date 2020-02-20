#include "holberton.h"
/**
 *reverse_array- function that reverses the content of an array of integers.
 *@a: integer
 *@n: integer
 *Return: result
 */
void reverse_array(int *a, int n)
{
int i, k;
int b[509];

for (i = 0; i < n; i++)
{
b[i] = a[i];
}
for (k = 0; k < n; k++)
{
a[k] = b[n - 1 - k];
}

}
