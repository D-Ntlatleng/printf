#include "main.h"

/**
 * _print_str - prints a given string of charectors
 * @str: pointer to the string to print
 *
 * Return: number of charectors printed
 */
int _print_str(char *str)
{
	int i = 0;
	char *s = "(null)";

	if (str)
	{
		for (; str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	else
		for (; s[i] != '\0'; i++)
			_putchar(s[i]);
	return (-1);
}
