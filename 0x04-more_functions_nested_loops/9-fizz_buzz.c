#include "main.h"
#include <stdio.h>
/**
* space - space or new line
* @i: number
*/
void space(int i)
{
if (i == 100)
{
printf("\n");
}
else
{
printf(" ");
}
}

/**
* main - entry point
* Return: always 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
space(i);
continue;
}
else if (i % 3 == 0)
{
printf("Fizz");
space(i);
continue;
}
else if (i % 5 == 0)
{
printf("Buzz");
space(i);
continue;
}
else
{
printf("%d", i);
space(i);
}
}
return (0);
}

