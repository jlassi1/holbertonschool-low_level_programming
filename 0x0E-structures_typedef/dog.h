#ifndef _DOG_H_
#define _DOG_H_
/**
  *struct dog-struct type
  *struct dog_t-new name for the type struct dog
  *@name: name of dog
  *@owner: owner of dog
  *@age: age of dog
  */
struct dog
{
char *name;
char *owner;
float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
  *struct dog_t-new name for the type struct dog
  *@name: name of dog
  *@owner: owner of dog
  *@age: age of dog
  */
typedef struct dog_t
{
char *name;
char *owner;
float age;
};

#endif
