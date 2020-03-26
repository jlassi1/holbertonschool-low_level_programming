#include "holberton.h"
/**
 *binary_to_uint-converts a binary number to an unsigned int
 *@b:  is pointing to a string
 *
 *Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
        if (!b)
        return (0);
  while(*b)
  {
          if (*b != 48 && *b != 49)
          return (0);
    num = ((*b)-'0') + num*10;
    b++;   
  }

  int dec = 0, i = 0, rem, binary = 1;
    while (num != 0)
     {
        rem = num % 10;
        num /= 10;
        dec += rem * binary;
        ++i;
        binary *= 2;
    }

   return (dec);
}
