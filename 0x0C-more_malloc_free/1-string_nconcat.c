#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination
 * @s2: source
 * @n: bytes to be allocated
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (n >= j)
		n = j;

	ptr = (char *)malloc(sizeof(s2) + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (sizeof(s2) + n); i++)
		if (ptr)
		{
			strcpy(ptr, s1);
			strncat(ptr, s2, n);
		}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}
