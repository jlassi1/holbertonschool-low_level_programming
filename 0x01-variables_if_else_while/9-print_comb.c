#include <stdio.h>
/**
 * main - main function
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: void
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	if (x != 57)
	{
		putchar(44);
		putchar(32);
	}
	}

	putchar('\n');
	return (0);
}
