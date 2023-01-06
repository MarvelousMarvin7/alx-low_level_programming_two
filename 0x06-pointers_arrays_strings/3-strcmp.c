#include "main.h"

/**
 * _strncpy- Copy striings
 * @dest: resulting string
 * @src: appends src to dest
 * @n: n bytes of src
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return ((s1[i] - s2[i]));
}
