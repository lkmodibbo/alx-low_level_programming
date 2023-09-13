#include "main.h"
/**
* print_sign - print the sign of a number
* @c: the number to be checked
* Return: 1 for positive number and -1 for negative and 0 for anything else
*/
int _printsign(int n)
{
if ( n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
