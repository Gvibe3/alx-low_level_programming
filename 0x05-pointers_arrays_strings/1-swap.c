#include <stdio.h>
#include "main.h"
/**
*swap_int -swap two intigers
*@a : pointer to an int a
*@b : pointer to an int b
*Return : Always 0
*/
void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = *d;
}
