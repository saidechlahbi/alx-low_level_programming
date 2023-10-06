#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int m = 0, n = 0, k = 0;

while (dest[m] != '\0')
{
m++;
}
while (src[k] != '\0')
{
k++;
}
while (n < n && n <= k)
{
dest[m] = src[n];
m++;
n++;
}
return (dest);
}
