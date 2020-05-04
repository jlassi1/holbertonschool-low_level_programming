#include "holberton.h"

/**
 *_memcpy- copies n bytes from memory area src to memory area dest
 *@src : char
 *@dest : char
 *@n : int
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);

}
