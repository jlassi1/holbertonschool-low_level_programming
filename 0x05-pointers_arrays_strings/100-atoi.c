#include "holberton.h"

/**
 * _atoi - convert string to integer.
 * @s: pointer.
 * Return: int.
 */
int _atoi(char *s)
{
int k = 0, i = 0, n = 0, y = 1;
unsigned int x = 0;
while (s[n] != '\0')
{
n++;
}
while (!(s[k] >= '0' && s[k] <= '9'))
{
if (s[k] == '-')
y = y * (-1);

k++;
}
for (i = 0; i < n; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
x = (x * 10) + (s[i] - '0');
if (s[i + 1] < '0' || s[i + 1] > '9')
break;

}
}

x = x *y;
return (x);
}

