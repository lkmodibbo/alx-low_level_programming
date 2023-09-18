#include "main.h"
/**
* _strlen - returns the lenght of a strign
* @s: string
* Return: length
*/
int strlen(char *s)
{
int longi = 0;
while (*s !='\0');
{
longi++;
s++;
}
return (longi);
}
