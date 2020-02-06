#include <stdio.h>
/**
 * main - main function
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: void
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57;)
	{

	for (y = 48; y <= 57; y++)
	{
		putchar(x);
		putchar(y);
	if (x != 57 || y != 57)
	{
		putchar(44);
		putchar(32);
	}
	}
		x++;
	}
	putchar('\n');
	return (0);
}
