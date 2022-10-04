#include <stdlib.h>
#include "main.h"
/**
*create_array - program to create meomory allocation
*@size: size of array
*@c:character
*Return: pointer to an array or NULL
*/
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;
if (size == 0)
return (NULL);
 pointer = malloc(sizeof(char) * size);
/*
*Allocate number of byte to be allocated
*return pointer to allocated memory
*/
if (pointer == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
pointer[i] = c;
return (pointer);
}
}
