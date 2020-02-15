#include <stdio.h>
#include <stdio.h>

/**
 * main - function to find and print the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int n = 612852475143, i = 3;
int  x;
while (n % 2 == 0)
{
x = 2;
n = n / 2;
}
while (i < n)
{
if (n % i == 0)
{
n = n / i;

x = i;

}
i += 2;
}
printf("%i \n", x);
return (0);
}
