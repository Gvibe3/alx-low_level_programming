#include "main.h"
/**
*print_alphabet - output 10 times
*Return: 0
*/
void print_alphabet(void)
{
int n, co;
co = 0;
while (co < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
co++;
_putchar('\n');
}
}
