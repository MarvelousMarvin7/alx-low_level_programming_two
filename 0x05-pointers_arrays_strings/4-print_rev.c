#include "main.h"

/**
 * print_rev - check the code
 * @s: variable
 * Return: reversed string.
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	while (length > 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
