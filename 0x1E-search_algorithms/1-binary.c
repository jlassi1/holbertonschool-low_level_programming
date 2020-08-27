#include "search_algos.h"
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
size_t i;
i = 0;

printf("Searching in array: ");
while (array && i < size)
{
if (i > 0)
printf(", ");
printf("%d", array[i]);
++i;
}
printf("\n");
}
/**
 *binary_search-searches for a value in a sorted array of integers
 *@array:is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *
 *Return:-1 if faild or index of value in the array
 */
int binary_search(int *array, size_t size, int value)
{

size_t x, idx, y;

if (array == NULL)
	return (-1);

x = 0;
y = size - 1;
while (x <= y)
{

	idx = ((x + y) / 2);
	print_array(array + x, y - x + 1);
	if (array[idx] < value)
		x = idx + 1;
	else if (array[idx] > value)
		y = idx - 1;
	else
		return ((int)idx);

}

return (-1);
}

