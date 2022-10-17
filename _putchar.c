#include "main.h"
/**
 * _putchar - print a given charector
 * @c: charector to print
 *
 * Return: 1 or -1 of error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
