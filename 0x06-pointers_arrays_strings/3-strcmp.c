#include "main.h"
/**
*_strcmp- function to copy strings
*@s1: first string
*@s2: second string
*Return :  if s1 == s2 ,0
*          if s1 < s2 ,negative
*          if s1 > s2 ,postive
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
