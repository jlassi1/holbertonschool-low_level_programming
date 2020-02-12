#include <stdio.h>

/**
 * main - Compute and print the sum of all the multiples of 3 and 5 below 1024
 *
 * Return: Always 0.
 */

int main(void)
{
int n, i;
n = 0;
for (i = 1 ; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
n += i;
}
}
printf("%d\n", n);
return (0);

}
