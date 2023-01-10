#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Contains copy of string of pointer
 * @str: string
 * Return: Null if false
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, s;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = (char *)malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);
	for (s = 0; s <= i; s++)
		ptr[s] = str[s];
	return (ptr);
	free(ptr);
}
