#include "search_algos.h"
/**
 *linear_search-searches for a value in an array of integers
 *@array:is a pointer to the first element of the array to search in
 *@size:is the number of elements in array
 *@value:is the value to search for
 *
 *Return: -1 fi faild or index of value in the array
 */

int linear_search(int *array, size_t size, int value)
{
int index = 0;

if (array == NULL)
	return (-1);

while ((size_t)index != size)
{
	printf("Value checked array[%d] = [%d]\n", index, array[index]);

	if (array[index] == value)
		return (index);

	index++;

}

	return (-1);
}

