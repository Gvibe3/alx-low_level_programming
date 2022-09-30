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
int g;
for (g < 0; g <= argc, g++)
{
printf("%s\n", argv[g]);
}
return (0);
}
