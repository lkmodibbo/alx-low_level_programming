#include "main.h"
/**
* largest_number -return the largest of 3 numbers
* @c: at first integer
* @b: at second integer
* @c: at third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (a > b && c > a)
{
largest = c;
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
}
