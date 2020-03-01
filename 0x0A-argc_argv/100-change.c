#include <stdio.h>
#include <stdlib.h>
/**
* main(:)? (- argc argv)?
*
* @argc: int
* @argv: pointer char
* Return: argv
*/
int main(int argc, char *argv[])
{
	int sum = 0, n, i = 0;
	int cent[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	n = atoi(argv[1]);
		while (i < 5 || n != 0)
		{
			if (n / cent[i] != 0)
			{
				{
					sum = sum + n / cent[i];
					n = n % cent[i];
				}
			}
			i++;
		}
printf("%d\n", sum);
	return (0);
}
