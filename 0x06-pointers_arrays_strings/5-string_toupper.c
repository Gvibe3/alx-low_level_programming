#include <stdio.h>
#include "main.h"
/**
*string_toupper- to write lowerletter to uppercase
*@hi: input string
*Return: output
*/
char *string_toupper(char *)
{
int index;
int desp = 'a' - 'A';
for (index = 0 ; hi[index] != '\0'; index++)
{
if(hi[index >= 'a' && hi[index] <= 'z')
{
hi[index] = hi[index] - desp;
}
}
return(hi);
}
