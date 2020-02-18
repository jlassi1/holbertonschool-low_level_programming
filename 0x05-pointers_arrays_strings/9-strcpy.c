#include "holberton.h"
/**
 * _strcpy - copies the string pointed
 *@src : pointer
 *@dest : pointer
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i, n = 0;
while (src[n] != '\0')
n++;
for (i = 0; i < n ; i++)
{
dest[i] = src[i];
}
return (dest);

}
