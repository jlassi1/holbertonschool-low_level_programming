#include <stdio.h>

/**
 * main - main function
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}

