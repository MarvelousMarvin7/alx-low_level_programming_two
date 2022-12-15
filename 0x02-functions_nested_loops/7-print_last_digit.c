#include "main.h"

/**
 *print_last_digit - A function that output last digit of a number
 *
 *@num: Number variable
 *
 *Return: value of the last digit if negative or positive
 */
int print_last_digit(int num)
{
	int lastd;

	lastd = num % 10;
	if (num < 0)
	{
		lastd = (-1 * (num % 10));
		_putchar(lastd + '0');
		return (lastd);
	}
	else if (num == 0)
	{
		_putchar(lastd + '0');
		return (lastd);
	}
	else
		_putchar(lastd + '0');
	return (lastd);
}
