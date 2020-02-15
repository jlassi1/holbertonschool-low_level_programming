#include <stdio.h>

/**
 * main - function to find and print the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143, i;
for (i = 2; i < n; i++)
{
if (n % i == 0)
	{
n = n / i;


	}
}
printf("%ld\n", i);
return (0);
}
