#include "main.h"
/**
*_strpbrk- function to search string
*@s: string to be scanned
*@accept: character to match
*Return: s or null
*/
char *_strpbrk(char *s, char *accept)
{
int i, k;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
return (s + i);
}
}
return (0);
}
