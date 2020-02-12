#include <stdio.h>

/**
 * main - prints  Fibonacci numbers, the sum of the even-valued terms.
 *
 * Return: Always 0.
 */

int main(void)
{

long int n[34];
int i;
for (i = 2; i <= 33; i++)
{


 if (i == 2)
{
n[2] = 2;
}
else
{
n[i] = n[i - 2] + n[i - 1];
}
if (n[i] % 2 == 0)
{
if (i != 32)
printf("%ld, ", n[i]);
else
printf("%ld\n", n[i]);
}

}

return (0);
}
