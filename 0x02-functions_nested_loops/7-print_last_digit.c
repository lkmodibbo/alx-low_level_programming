#include "main.h"
/**
 * print_last_digit - print last digit of num
 * @n: is the number that we will take and return its last digit.
 *
 * Return: an int that is the last digit.
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
