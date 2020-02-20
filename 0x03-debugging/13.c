#include <stdio.h>
#include <stdlib.h>

int main ()
{

char n[51];
int i;
for (i = 0; i <= 51; i++)
{
if ( i == 0)
{
n[0] = 0;
}
if (i == 1)
{
n[1] = 1;
}
else
{
n[i] = n[i-2] + n[i-1];
}
if (i < 51)
printf("%d, ", n[i]);
else
printf("%d, ", n[i]);
    
}

return (0);
}
