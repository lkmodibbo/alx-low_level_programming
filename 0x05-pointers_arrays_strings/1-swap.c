#include "main.h"
/**
* Swap_int: swap the values of two integers
* @a: integer to swap
* @b: integer to swap
*/
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
