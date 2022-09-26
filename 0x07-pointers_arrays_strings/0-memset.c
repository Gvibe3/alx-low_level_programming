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
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
