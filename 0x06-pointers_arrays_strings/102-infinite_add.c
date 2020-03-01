#include "holberton.h"
/**
 *reverse_array- function that reverses the content of an array of char.
 *@a: char
 *@n: integer
 *Return: result
 */
void reverse_arry(char *a, int n)
{
int i, k;
int b[509];
for (i = 0; i < n; i++)
b[i] = a[i];
for (k = 0; k < n; k++)
a[k] = b[n - 1 - k];
}

/**
 *infinite_add -
 *
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k = 0, l = 0;
int *sum = 0;
while (*n1)
j++;
while (*n2)
i++;

reverse_arry(n1 , j);
reverse_arry(n2 , i);
for (k = 0; k < i && k < j; k++)
{
sum[k] += (n1[k] - '0') + (n2[k] - '0');
if (*sum / 10 != 0)
{
sum[k] = sum[k] % 10;
sum[k+1] = 1;
}
}
while (*sum)
{
r[l] = sum[l] + '0';
l++;
}
reverse_arry(r , k);

if (k <= size_r)
return (r);
else
return (0);

}


