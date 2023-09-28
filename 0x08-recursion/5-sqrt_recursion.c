#include "main.h"

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);

	if (i == n / 2)
		return (-1);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int boot = 0;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(n, boot));
}
