#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: pointer to arrays
 * @size: size of array
 * @cmp: pointer to function that compares values
 *
 * Return: (-1) if no match and if size is 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
