#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
  *
  * 
  * 
  * 
  * 
  */

int main (int argc ,char **argv)
{
char *div = "/";
char *mod ="%";
int a = 0, b = 0, somme = 0;
int (*result)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if (b == 0 && (argv[2] == div || argv[2] == mod))
{
printf("Error\n");
exit(100);
}
for (i = 0; !argv[2] ; i++)
;
if (i > 2)
{
printf("Error\n");
exit(99);
}

result = get_op_func((argv[2]));
somme = result(a, b);
printf("%d\n", somme);
}
