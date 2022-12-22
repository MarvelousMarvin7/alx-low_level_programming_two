#include "main.h"

/**
 * _puts - output string
 * @str: variable
 * Return: String
 */
void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != 0; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
