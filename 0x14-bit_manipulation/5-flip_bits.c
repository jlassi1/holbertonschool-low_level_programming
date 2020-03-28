#include "holberton.h"
/**
 *flip_bits- get the number of bits you would need to flip.
 *@n: unsigned long int
 *@m: unsigned long int
 *Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x, y = 0;
x = n ^ m;
while (x)
{
y += x & 1;
x = x >> 1;
}
return (y);

}
