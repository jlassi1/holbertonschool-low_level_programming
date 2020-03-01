#include "holberton.h"

/**
 *_memset()- fills the first n bytes of the memory area pointed
 *@s : pointer
 *@b : char
 *@n : int
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);

}
