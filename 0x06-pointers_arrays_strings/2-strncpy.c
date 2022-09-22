#include "main.h"
/**
 * _strncpy - c function that copies a string, including the 
 * terminating null byte, using atmostan inputed number of bytes
 * if the length of the source string is lessthan the maximum bytes number,
 * the remainder destination  strign is filled with nul bytes . 
 * works identically to the standard library function 'strncpy'
 * @dest: buffeer storing the string copy
 * @src: the source string
 * @n: max number byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
  int i;
  for ( i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];
  for ( ; i < n; i++)
    dest[i] = '\0';
  return (dest);
}
