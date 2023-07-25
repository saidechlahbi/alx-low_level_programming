#include "main.h"
/**
* rev_string - reverse str
* @s: string
*/
void rev_string(char *s)
{
int i = 0, l = 0;
char t;

while (s[i++])
{
l++;
}
for (i = l - 1; i >= l / 2; i--)
{
t = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = t;
}
}

