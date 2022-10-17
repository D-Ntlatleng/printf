#include "main.h"
/**
 * _print_str - prints a given string of charectors
 * @str: pointer to the string to print
 *
 * Return: number of charectors printed
 */

int _print_str(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
			_putchar(str[i++]);
	}
	return (i);
}
