#include "function_pointers.h"

/**
 * printname - output name
 * @name: pointer to name
 * @f: pointer to printname funtion
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
