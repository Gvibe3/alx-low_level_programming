#include <stdio.h>
#include "main.h"
/**
*_strcmp- function to compare strings
*@s1: input first string
*@s2: input second string
*Return : to '0' if they are equal else to another number
*/
int _strcmp(char *s1, char *s2)
{
for (; *s1 != '\0' && *s2 != '\0')&&(*s1 == *s2); (s1++, s2++)
if (*s1 == *s2)
{
return (0);
}
return (*s1 - *s2);
}
