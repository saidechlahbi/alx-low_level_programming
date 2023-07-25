#include "main.h"
/**
* _strlen - calculate the len of a str
* @s: pointer to the str
* Return: returns the len of str
*/
int _strlen(char *s)
{
int i;
char a;
for (i = 0; a != '\0'; i++)
{
a = s[i];
}
return (i - 1);
}

