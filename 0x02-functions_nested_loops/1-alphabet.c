#include "main.h"
/**
*print_alphabet - prints the alphabet in lowercase
*Return: Always 0
*/
void print_alphabet(void)
char $c;
{
for ($c = 'a'; $c = 'z'; $c++)
{
print_alphabet($c);
}
print_alphabet('\n');
return (0);
}
