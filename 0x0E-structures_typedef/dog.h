#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
*struct dog-info about the dog
*@name-name of the dog
*@age-age of the dog
*@owner-owner of the dog
*/
struct dog
{
  char *name;
  char *owner;
  float age;
};
/**
*dog_t-Typedef structdog
*/
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, char *owner, float age);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif/* _DOG_H_ */
