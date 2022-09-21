#include <stdio.h>
#include "main.h"
/**
*_strlen -  length of string
*@s: string
*Return: inc length
*/
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;
return (inc);
}
