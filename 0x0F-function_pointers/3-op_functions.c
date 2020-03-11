#include "3-calc.h"
/**
  *op_add-return sum of 2 integer
  *@a: integer
  *@b: integer
  *Return: sum
  */
int op_add(int a, int b)
{
int sum = 0;
sum = a + b;
return (sum);
}
/**
  *op_sub-difference of 2 integer
  *@a: integer
  *@b: integer
  *Return: result
  */
int op_sub(int a, int b)
{
return (a - b);
}
/**
  *op_mul-product of 2 integer
  *@a: integer
  *@b: integer
  *Return:result
  */
int op_mul(int a, int b)
{
return (a * b);
}
/**
  *op_div-divise 2 integer
  *@a: integer
  *@b: integer
  *Return: result
  */
int op_div(int a, int b)
{
return (a / b);
}
/**
  *op_mod-remainder od the division
  *@a: integer
  *@b: integer
  *Return: result
  */
int op_mod(int a, int b)
{
return (a % b);
}
