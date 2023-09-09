#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: Always 0 (success)
*/
int main(void)
{
int d;
int b;
for (d = '0'; d < '9'; d++)
{
for (b = d + 1; b <= '9'; b++)
{
if (b != d)
{
putchar(d);
putchar(b);
if (d == '8' && b == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
