#include "main.h"
/**
*string_toupper- to write lowerletter to uppercase
*@c: input string
*Return: changed string
*/
char *string_toupper(char *)
{
int i = 0;
while (c[i] != '\0')
{
if (c[i] > 96 && c[i] < 123)
c[i] -= 32;
i++;
}
return (c);
}
