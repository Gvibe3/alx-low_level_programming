#include <stdio.h>
#include "main.h"
/**
*_strncat- function to concatnates two string
*@dest: output
*@src: input
*@n: byte for src
*Return: two strings
*/
char *_strncat(char *dest, char *src, int n)
{
int index, count;
for (index = 0 ; dest[index] != '0'; index++)
for (count = 0 ; count < n && src[count] != '0'; count++)
{
dest[index] = src[count];
index++;
{
if (count < n)
dest[index] = '\0';
}
return (dest);
}
