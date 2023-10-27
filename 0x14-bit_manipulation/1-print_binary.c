#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: is pointing to a string of 0 and 1 chars.
 * Return: Void.
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
