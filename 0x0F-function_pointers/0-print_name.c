#include <stdio.h>
#include "function_pointers.h"
/**
*print_name-function to print name
*@name:name to be print
*@f:function
*Return:void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
