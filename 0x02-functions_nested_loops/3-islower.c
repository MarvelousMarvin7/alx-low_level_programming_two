#include "main.h"

/**
 *_islower - checks for lowercase characters
 *
 *@c: variable to be checked
 *
 *Return: 1 if int c is lowercase else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
