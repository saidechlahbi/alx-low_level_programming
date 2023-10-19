#include <stdio.h>


/**
 * First - Print a string before the main function is executed.
 *
 * Return: void
 */


void __attribute__ ((constructor)) First()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
