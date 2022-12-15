#include "main.h"

/**
 *print_alphabet - output lowercase alphabets
 *
 *Return: 0 after success
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
