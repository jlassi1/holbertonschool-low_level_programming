#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 *
 */

char **strtow(char *str)
{
int i = 0, j = 0;

while (str[i])
{
	if ((str[i] == '	' || str[i] == ' ') && str[i + 1] != ('	' && ' '))
	j++;

	i++;
}

char **array = malloc(sizeof(char *) * j + 1);

while (str)
{
	if (str != ('	' && ' '))
	{
	array[l][k] = str[k];

}


}