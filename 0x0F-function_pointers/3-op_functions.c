#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function that Returns the sum of two numbers.
 * @a: The First number.
 * @b: The Second number.
 *
 * Return: The Sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that Returns the difference of two numbers.
 * @a: The First number.
 * @b: The Second number.
 *
 * Return: The Difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that Returns the product of two numbers.
 * @a: The First number.
 * @b: The Second number.
 *
 * Return: The Product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that Returns the division of two numbers.
 * @a: The First number.
 * @b: The Second number.
 *
 * Return: The Quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - functio that Returns the remainder of the division of two numbers.
 * @a: The First number.
 * @b: The Second number.
 *
 * Return: The Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

