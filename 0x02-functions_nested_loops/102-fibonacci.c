#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0.
 */

int main(void)
{

long int n[50];
int i;
for (i = 1; i <= 50; i++)
{
if (i == 1)
{
n[1] = 1;
}
else if (i == 2)
{
n[2] = 2;
}
else
{
n[i] = n[i - 2] + n[i - 1];
}
if (i != 50)
printf("%ld, ", n[i]);
else
printf("%ld\n", n[i]);
}
return (0);
}
