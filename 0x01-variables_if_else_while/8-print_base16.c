#include <stdio.h>
/**
 * main - main function
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: void
 */
int main(void)
{
	int x;
	char X;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (X = 'a'; X <= 'f'; X++)
	{
		putchar(X);
	}
	putchar('\n');
	return (0);
}

