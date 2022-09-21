#include <stdio.h>
#include "main.h"
/**
*_strcpy- copy string
*@dest: a pointer to a destination string
*@src: a pointer source to copy a string
*inncluding the terminating null byte (0),
*to the buffer by dest.
*Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
char *aux = dest;
while (*src)
*dest++ = *src++;
return (aux);
}
