#include "main.h"

/**
 * _atoi - convert strings to words
 * @s: variable to be used
 * Return: Always 0.
 */
int _atoi(char *s)
{

	unsigned int str, i, j, k, n, m;

	str = 0;
	k = 1;
	n = 1;
	j = 0;
	m = 0;

	while (s[str] != '\0')
	{
		if (j > 0 && (s[str] < '0' || s[str] > '9'))
			break;

		if (s[str] == '-')
			k = k * (-1);

		if ((s[str] >= '0') && (s[str] <= '9'))
		{
			if (j > 0)
				n = n * 10;
			j++;
		}
		str++;
	}

	for (i = str - j; i < str; i++)
	{
		m = m + ((s[i] - 48) * n);
		n = n / 10;
	}

	return (m * k);
}
