#include "main.h"

/**
 * rev_string - check the code
 * @s: variable to be used
 * Return: reverse stringxc'
 */
void rev_string(char *s)
{
	char rev = s[0];
	int leng;
	int i;

	leng = 0;

	while (s[leng] != '\0')
		leng++;

	for (i = 0; i < leng; i++)
	{
		leng--;
		rev = s[i];
		s[i] = s[leng];
		s[leng] = rev;
	}

}
