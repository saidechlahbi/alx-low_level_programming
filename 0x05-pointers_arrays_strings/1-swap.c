#include "main.h"
/**
* swap_int - swap value of two int
* @a: first var
* @b: secend var
*/
void swap_int(int *a, int *b)
{
int x;

x = *a;
*a = *b;
*b = x;
}
