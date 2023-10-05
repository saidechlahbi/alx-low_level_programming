#include <unistd.h>
#include "main.h"
/**
 * _putchar - this is the print function 
 *            print one caracter
 * @caract: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned
 */
int _putchar(char caract)
{
	return (write(1, &caract, 1));
}

