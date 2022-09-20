#include "main.h"
/**
 *puts - prints a string, followed by a newline to stdout
 *
 * Return: Nothing
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
++str;
}
_putchar('\n');
}
