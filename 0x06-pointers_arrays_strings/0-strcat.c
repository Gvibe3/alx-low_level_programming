#include <stdio.h>
/**
*_strcat- to concatnates string
*@src: input source
*@dest: output
*Return: concatnates strings
*/
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != \'0'; i++)
for (j = 0; src[j] != \'0'; j++)
{
dest[i] = src[j];
i++;
}
return (0);
}
