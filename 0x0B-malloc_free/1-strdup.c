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
	int i;

	for (i = 0; str[i]; i++)
	{
		ptr = (malloc(sizeof(char) * i));
	}
	if (ptr != NULL)
		strcpy(ptr, str);
	if (str == NULL)
		return (NULL);
	if (!str)
		return (NULL);
	return (ptr);
}
