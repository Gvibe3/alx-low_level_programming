#include <stdio.h>
#include "main.h"
/**
*print_rev -print string in reverse
*@s:string to be reversed
*Return: output
*/
void print_rev(char *s)
{
int len = 0, index = 0;
len = strlen(s);
for (index = len - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}
