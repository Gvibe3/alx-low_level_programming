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
char destination[] = "Hello ";
char source[] = "World!";
strcat(destination, source);
printf("Concatenated String: %s\n", destination);
return (0);
}
