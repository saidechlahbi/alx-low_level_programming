#include "main.h"
/**
* print_line - prints a straight line
* @n: num of times _ will be printed
*/
void print_line(int n)
{
int i = 0;

if (n == 0)
{
_putchar('\n');
}
else
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}

