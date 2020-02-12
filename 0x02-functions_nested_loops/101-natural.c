#include <stdio.h>
#include <stdlib.h>
int main(void)
{
int n, i;
n = 0;
for (i = 1 ; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
n += i;
}
}
printf("%d\n", n);
return (0);

}
