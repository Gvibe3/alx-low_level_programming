#include <stdio.h>
#include "main.h"
/**
*print_array -prints elements of an array
*@n:input integer
*@a:input array
*Return: 0
*/
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
putchar('\n');
}
