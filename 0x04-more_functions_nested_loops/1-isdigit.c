#include "main.h"

/**
 *_isdigit = Output digit if condition is true
 *
 *@c: variable to be tested
 *
 *Return: 1 if condition is true
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
