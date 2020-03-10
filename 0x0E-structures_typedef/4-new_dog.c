#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *new_dog - creates a new dog
  *@name: name of dog
  *@owner: owner of dog
  *@age: age of dog
  *Return: pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i = 0, j = 0, x, y;
if (name == NULL || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d ==  NULL)
return (NULL);
while (name[i++])
;
d->name = malloc(i);
if (d->name == NULL)
{
free(d);
return (NULL);
}
for (x = 0; x < i; x++)
d->name[x] = name[x];
while (owner[j++])
;
d->owner = malloc(j);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (y = 0; y < j; y++)
d->owner[y] = owner[y];
d->age = age;
return (d);
}

