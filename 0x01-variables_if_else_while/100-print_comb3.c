#include <stdio.h>

/**
 *main - Output numbers
 *
 *Return - 0 after success
 */
int main(void)
{
int digit;

for (digit = 0; digit <= 99; digit++)
{
putchar(digit / 10 + '0');
putchar(digit % 10 + '0');
{
if (digit != 99)
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
