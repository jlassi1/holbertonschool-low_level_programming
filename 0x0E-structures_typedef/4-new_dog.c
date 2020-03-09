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
char *new_name;
char *new_owner;
if (name == NULL || owner == NULL)
return (NULL);
d = malloc(sizeof(dog_t));
if (d ==  NULL)
return (NULL);
while (name[i])
;
new_name = malloc(sizeof(char) * (i + 1));
if (new_name == NULL)
{
free(d);
return (NULL);
}
for (x = 0; x < i; i++)
new_name[x] = name[x];
new_name[x] = '\0';
while (owner[j])
;
new_owner = malloc(sizeof(char) * j + 1);
if (new_owner == NULL)
{
free(new_name);
free(d);
return (NULL);
}
for (y = 0; y < j; j++)
new_owner[y] = owner[y];
new_owner[y] = '\0';
d->name = new_name;
d->age = age;
d->owner = new_owner;
return (d);
}
