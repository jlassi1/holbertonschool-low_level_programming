#include "dog.h"
#include <stdio.h>

/**
  *
  *
  *
  *
  */
typedef struct 
{
char *name;
char *owner;
float age;
}dog;


void init_dog(struct dog *d, char *name, float age, char *owner)
 {
dog *d = {*name, *owner, age};


 }