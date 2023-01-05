#include "main.h"

/**
 * _strcpy - copy string to dest
 * @dest: destination of string
 * @src: source of string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((i >= 0) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
