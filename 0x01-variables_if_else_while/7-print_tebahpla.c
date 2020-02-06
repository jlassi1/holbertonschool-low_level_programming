#include <stdio.h>

/**
 * main - main function
 * Description:prints the alphabet in lowercase
 * Return: void
 */

int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
