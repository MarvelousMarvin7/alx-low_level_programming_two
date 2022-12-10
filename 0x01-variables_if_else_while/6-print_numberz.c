#include <stdio.h>

/**
 *main - output digits
 *
 *Return: 0 after success
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 100; digit++)
putchar(digit);
putchar('\n');
return (0);
}
