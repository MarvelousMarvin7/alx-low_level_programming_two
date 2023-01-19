#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates array of integers
 * @min: minimun variable
 * @max: maximum variable
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	void *ptr;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * min + max);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
	free(ptr);
}
