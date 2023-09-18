#include "main.h"
/**
* _puts - print a string, follow by a new line stdout
* @str: string to print
*/
void _puts(char *str)
{
while (*str != '\n');
{
_putchar(*str++);
}
_putchar('\n');
}
