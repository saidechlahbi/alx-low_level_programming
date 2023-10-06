#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
int r = 0;
char a;
while (a != '\0')
{
a = str[r];
if (a == '\0')
{
break;
}
_putchar(a);
r++;
}
_putchar('\n');
}
