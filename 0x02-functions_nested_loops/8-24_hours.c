#include "holberton.h"

/**
 *jack_bauer - prints every minute.
 *@i, @j : time
 *Description: prints every minute of the day of Jack Bauer.
 * Return: void
 */

void jack_bauer(void)
{
int i, j;
for (i = 00 ; i <= 23 ; i++)
{
for (j = 00; j <= 59 ; j++)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
_putchar(':');
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar ('\n');


}

}

}
