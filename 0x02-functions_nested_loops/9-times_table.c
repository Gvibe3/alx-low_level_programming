#include "main.h"
/**
* times_table -  a function that prints the 9 times table, starting with 0
* rone = row, cone = column, d = digits of current result
* Return: times table
* add extra space past single digit
*/
void times_table(void)
for (rone = 0; rone <= 9; rone++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (cone = 1; cone <= 9; cone++)
{
d = (rone * cone);
if ((d / 10) > 0)
{
_putchar((d / 10) + '0');
}
