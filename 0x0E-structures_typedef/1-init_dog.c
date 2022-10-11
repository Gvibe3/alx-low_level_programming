#include "dog.h"
/**
*init_dog- initialize stuct dog
*@d:pointer to structure
*@name:dog name
*@age:the dog age
*@owner:dog owner
*Return:void
*/
void init_dog(struct dog *d, char *name, char *owner, float age)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
