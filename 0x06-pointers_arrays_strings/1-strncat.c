#include <stdio.h>
#include "main.h"
/**
*_strncat- function to concatnates two string
*@dest: output
*@src: input
*@n: param3
*Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
