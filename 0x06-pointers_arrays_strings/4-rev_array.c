#include "main.h"
/**
* reverse_array - reverses array
* @a: array
* @n: size
*/
void reverse_array(int *a, int n)
{
	int i = n - 1, t;

	while (i >= n / 2)
	{
		t = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = t;
		i--;
	}
}

