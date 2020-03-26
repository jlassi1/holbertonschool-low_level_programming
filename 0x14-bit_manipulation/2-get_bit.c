#include "holberton.h"
/**
 *get_bit- get the value of a bit at a given index.
 *@n: unsigned integer
 *@index: of bit to find
 *Return: the value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{

if (n > 1 && n >> index)
{
n = n >> index;
if (n & 1)
return (1);
else
return (0);
}
return (-1);
}
