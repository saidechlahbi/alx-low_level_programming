#include "main.h"
/**
 * _divisible - this function Checks if a number is divisible.
 * @nb: The number to be checked.
 *
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int _divisible(int nb, int div)
{
	if (nb % div == 0)
		return (0);

	if (div == nb / 2)
		return (1);

	return (_divisible(nb, div + 1));
}

/**
 * is_prime_number - prime.
 *
 * @n: integer params.
 *
 * Return: recursion.
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (_divisible(3, n));
	}
}
