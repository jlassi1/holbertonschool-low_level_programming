#include <stdio.h>

/**
 * main - main function
 * Description:prints the alphabet in lowercase
 * Return: void
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
