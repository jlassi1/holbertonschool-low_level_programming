#include <stdio.h>
#include <stdio.h>

/**
 * main - function to find and print the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143;
int i = 2, x;

while (i < n)
{
if (n % i == 0)
{
n = n / i;
x = i;
}
else
{
i++;
}
}
printf("%i \n", x);
return (0);
}
