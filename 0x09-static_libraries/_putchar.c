#include <unistd.h>
/**
*_putchar- write character
*@c: character
*Return: 1 on success 
*on error return -1 and fix 
*/
int _putchar(char c)
{
  return (write (1, &c , 1));
}
