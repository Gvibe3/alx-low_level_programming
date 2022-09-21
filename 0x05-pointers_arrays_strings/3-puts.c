#include <stdio.h>
#include "main.h"
/**
*_puts - print string
*@str : string to be printed
*Return: prit output
*/
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
