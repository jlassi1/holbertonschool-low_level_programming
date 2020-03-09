#include "dog.h"
#include <stdio.h>
#include "dog.h"
/**
  *init_dog-initialize a variable of type
  *@name: name of dog
  *@owner: owner of dog
  *@age: age of god
  *@d: pointer
  *Return:
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}

else
return;

}
