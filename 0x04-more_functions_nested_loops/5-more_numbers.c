#include "main.h"
/**
* more_numbers - print from 0 to 14
*/
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar(49);
}
_putchar(j % 10 + 48);
}
_putchar('\n');
}
}

