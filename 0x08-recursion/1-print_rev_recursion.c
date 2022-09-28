#include "main.h"
/**
*_print_rev_recursion- function reverse string
*@s: string
*Return: reverse string
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
s++;
return;
}
s--;
_putchar(*s);
_print_rev_recursion(s);
}
