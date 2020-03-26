#include "holberton.h"
/**
 *get_bit- get the value of a bit at a given index.
 *@n: unsigned integer
 *@index: of bit to find
 *Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8)
return (-1);

n = n >> index;

if (n & 1)
return (1);

else
return (0);

}
