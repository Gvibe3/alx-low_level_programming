#include "main.h"
/**
*_memcpy- function to copy
*@src: a pointer source of data to be copied
*@dest: a poitner destination where data will be copied
*@n: size of byte to copy
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
