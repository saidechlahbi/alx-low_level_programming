#include "main.h"
/**
* _puts - print a string
* @str: string
*/
void _puts(char *str)
{
int i = 0;
char a;
while (a != '\0')
{
a = str[i];
if (a == '\0')
{
break;
}
_putchar(a);
i++;
}
_putchar('\n');
}

