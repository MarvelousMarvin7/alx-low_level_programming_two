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

	ptr = (malloc(sizeof(char)));
	if (ptr != NULL)
		strcpy(ptr, str);
	if (str == NULL)
		return (0);
	return (ptr);
	free(ptr);
}
