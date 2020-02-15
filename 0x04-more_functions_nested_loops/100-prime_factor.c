#include <stdio.h>
#include <math.h>
/**
 * main - function to find and print the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143, i = 3;
int  x, j;
while (n % 2 == 0)
{
x = 2;
n = n / 2;
}
while (i < n)
{
if (n % i == 0)
{
for (j = 2; j < i; j++)
{
if (i % j != 0)
{
x = i;
}
}
n = n / i;
}
i++;
}
printf("%i \n", x);
return (0);
}
