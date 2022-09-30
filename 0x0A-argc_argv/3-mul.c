#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main-pass argument
*@argc: count argument
*@argv: vector argument
*Return: error if not met requirment and to 1
*/
int main(int argc, char *argv[])
{
int m = 0;
if (argc == 3)
{
m = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", m);
return (0);
}
else
{
printf("Error\n");
}
return (1);
}
