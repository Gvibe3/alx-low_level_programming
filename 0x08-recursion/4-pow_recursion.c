#include "main.h"
/**
*_pow_recursion- function to calculate exponenet
*@x: base value
*@y: power value
*Return:-1 if y < 0 or 1 if y == 0
*/
int_pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return(x * _pow_recursion(x, y - 1));
}
