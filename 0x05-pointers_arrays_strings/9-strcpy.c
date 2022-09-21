#include <stdio.h>
#include "main.h"
/**
*_strcpy- copy string
*@dest: a pointer to a destination string
*@src: a pointer source to copy a string
*Return: 0
*/
char *_strcpy(char *dest, char *src)
{
char *aux = dest;
while (*src)
*dest++ = *src++;
return (aux);
}
