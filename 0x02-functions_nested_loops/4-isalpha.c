#include "holberton.h"

/**
 *_isalpha:c is a letter, lowercase or uppercase.
 *Description:Write a function that checks for alphabetic character.
 * Return:1
 * else returne:0
 */
int _isalpha(int c)
{

if (c >= 97 && c <= 122)
{
return (1);

}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
