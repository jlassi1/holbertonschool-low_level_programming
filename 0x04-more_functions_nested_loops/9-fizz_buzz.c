#include "holberton.h"
#include <stdio.h>
/**
 * main-prints a Fizz mult of 3 Buzz mult of 5 and FizzBuzz mult 15.
 *
 * Return: 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && (i % 5) != 0)
{
printf("Fizz ");
}
else if (i % 5 == 0 && (i % 3) != 0)
{
printf("Buzz ");
}
else if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else
printf("%i ", i);

}
printf("\n");

}
