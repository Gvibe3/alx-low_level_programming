#include "main.h"
/**
*_strchr- function to  search character
*@s: character to be scanned
*@c: character  to be searched in s
*Return: s or null
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
