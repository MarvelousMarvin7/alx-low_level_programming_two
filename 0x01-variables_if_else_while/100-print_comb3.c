#include <stdio.h>

/**
 * main - prints out all the numbers between 00 and 99
 * with no two digits being the same
 * Return: 0
 */
int main(void)
{
int d;
int c;
for (d = 0; d < 9; d++)
{
for (c = d + 1; c <= 9; c++)
{
putchar(d + '0');
putchar(c + '0');
if (d + c < 17)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
