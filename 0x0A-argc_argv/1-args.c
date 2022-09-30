#include <stdio.h>
#include "main.h"
/**
*main- print number of argument
*@argc:count argument
*@argv:vector for argumentt
*Return:0
*/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
