#include "main.h"

/**
 *print_sign - Output signs
 *
 *@n: variable to print signs
 *
 *Return: sings +, - , 0 , -1, and 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
