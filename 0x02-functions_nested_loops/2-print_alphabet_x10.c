#include "main.h"

/**
 *print_alphabet_x10 - Output alphabets on 10 lines
 *
 *Return : 0 after success
 */
void print_alphabet_x10(void)
{
	char alpha1;
	char alpha2;

	alpha1 = 0;

	while (alpha1 < 10)
	{
		for (alpha2 = 'a'; alpha2 < 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		alpha1++;
		_putchar('\n');
	}
}
