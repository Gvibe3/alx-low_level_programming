#include "main.h"
/**
*print_sign - functointo print sign of number
*@n: number input
*Return: Always 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
eles
{
_putchar ('-');
return (-1);
}
}
