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
	while (*s != '\0')
	{
		s++;
		length++;
	}
	while (length > 0)
	{
		s--;
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
