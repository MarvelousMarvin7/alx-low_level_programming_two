#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create arrays and initialise to a specific char
 * @size: size of of char
 * @c: constant
 * Return: Pointer or NULL if false
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size * sizeof(char));
	if (size == 0)
		return (0);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
