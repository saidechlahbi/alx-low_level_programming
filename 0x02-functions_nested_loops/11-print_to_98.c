#include <stdio.h>
#include "main.h"
/**
* print_to_98 - print to 98
* @n: input
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n == 98)
{
break;
}
printf(", ");
n++;
}
printf("\n");
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n == 98)
{
break;
}
printf(", ");
n--;
}
printf("\n");
}
else
{
printf("98\n");
}
}

