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
int i = 0;
while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
i++;
return (*(s1 + i) -*(s2 + i));
}

