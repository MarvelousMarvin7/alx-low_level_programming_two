#include <stdio.h>
#include "main.h"

/**
 * print_array - check the code for
 * @a: variable or poiinter to call
 * @n: number of element in the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
