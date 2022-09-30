#include "main.h"
/**
 *_memset - function to fill memory
*@n: unsigned int
*@b: character
*@s: pointer
*Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
