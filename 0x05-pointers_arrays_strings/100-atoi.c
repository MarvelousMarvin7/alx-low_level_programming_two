#include "main.h"

/**
 * _atoi - convert strings to words
 * @s: variable to be used
 * Return: Always 0.
 */
int _atoi(char *s)
{

	int i, j, k, n;

	i = n = 0;
	k = 1;

	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[k] == '-')
			k *= -1;
		i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		n = n * 10 + k * (*(s + j) - '0');
		j++;
	}
	return (n);
}
