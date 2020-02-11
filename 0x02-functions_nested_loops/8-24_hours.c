#include "holberton.h"

/**
 *void jack_bauer(void)prints every minute.
 *int n
 *Description:prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return:1
 * else returne:0
 */

void jack_bauer(void)
{
int i, j;
for (i = 00 ; i <= 23 ; i++)
{
for (j = 00; j <= 59 ; j++)
{
_putchar(i);
_putchar(':');
_putchar(j);
_putchar ('\n');




}

}

}
