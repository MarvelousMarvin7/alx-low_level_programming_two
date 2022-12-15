#include "main.h"

/**
 *_abs - Compute absolute integer
 *
 *@num: absolute integer variable
 *
 *Return: absolute integer after success
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * (-1));
	}
	else if (num == 0)
	{
		return (0);
	}
	else
		return (num);
}
