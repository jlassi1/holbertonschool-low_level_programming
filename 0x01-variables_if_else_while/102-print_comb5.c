#include <stdio.h>
/**
 * main - main function
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: void
 */
int main(void)
{
	int x, y, z, w;

	for (x = 48; x <= 57;)
	{

	for (y = 48; y <= 57; y++)
	{
	
	for (z = 48 ; z <= 57; z++)
	{
	for (w = z + 1; w <= 57; w++)
{		
		
		putchar(x);
		putchar(y);
		putchar(32);

		putchar(z);
		putchar(w);

	if (!(y == 56 && w == 56))
	{
		putchar(44);
		putchar(32);
	}
	}
	}
	}
		x++;

	}
	putchar('\n');
	return (0);
}
