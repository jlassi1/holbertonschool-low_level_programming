#include <stdio.h>
/**
 * main - main function
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: void
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57;)
	{

	for (y = x + 1; y <= 57; y++)
	{
	for (z = y + 1 ; z <= 57; z++)
	{
		putchar(x);
		putchar(y);
		putchar(z);

	if (!(x == 55 && y == 56 && z == 57))
	{
		putchar(44);
		putchar(32);
	}
	}
	}
		x++;

	}
	putchar('\n');
	return (0);
}
