#include <stdio.h>
#include "main.h"
/**
*main - pass argument
*@argc: count argument
*@argv: vector argument
*Return: 0
*/
int main(int argc, char *argv[])
{
while (*argv)
{
printf("%s\n", *argv);
(void)argc;
argv++;
}
return (0);
}
