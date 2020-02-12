#include <stdio.h>

/**
 * main - prints  Fibonacci numbers, the sum of the even-valued terms.
 *
 * Return: Always 0.
 */

int main(void)
{

long int n[35];
int i;
for (i = 1; i <= 32; i++)
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
if (n[i] % 2 == 0)
{

printf("%ld\n", n[i]);
}

}

return (0);
}
