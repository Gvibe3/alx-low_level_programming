#include <stdio.h>
#include "main.h"
/**
*_strncpy- copy strings
*@dest : output
*@src: input
*@n : number of byte to be copy
*Return: copy strings
*/
char *_strncpy(char *dest, char *src, int n)
{
int index;
for (index = 0 ; index < n && src[index] != '0' ; index++)
{
src[index] = dest[index];
}
for (index < n ; index++)
{
dest[index] = '\0';
}
return (dest);
}
