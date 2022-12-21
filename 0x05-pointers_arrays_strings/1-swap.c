#include "main.h"

/**
 * swap_int - swap values of 2 integers
 * @a: variable 1 to be tested
 * @b: variable 2 to be tested
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
