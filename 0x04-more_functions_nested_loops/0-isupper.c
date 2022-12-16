#include "main.h"

/**
 * _isupper - Output uppercase letter if condition is true
 *
 *@c: Variable to be tested
 *
 *Return: 1 if variable c is Uppercase letter
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
