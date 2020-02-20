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
while (n[i] <= 4000000)
{
i = 1;
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
i++;
}

return (0);
}
