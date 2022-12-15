#include "main.h"

/**
 *_isalpha - output uppercase letters
 *
 *@c: variable to be checked
 *
 *Return: 1 if int c is uppercase else 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
