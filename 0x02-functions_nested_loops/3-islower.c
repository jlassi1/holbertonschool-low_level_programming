#include "holberton.h"

/**
 *islowerif: c is lowercase
 *Description:Write a function that checks for lowercase character.
 * Return:1
 * else returne:0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}

}
