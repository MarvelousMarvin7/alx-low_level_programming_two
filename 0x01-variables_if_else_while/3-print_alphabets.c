#include <stdio.h>

/**
 *main - Output uppercase and lower case
 *
 *Return: 0 after success
 */

int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
putchar(alpha);
for (alpha = 'A'; alpha <= 'Z'; alpha++)
putchar(alpha);
putchar(\n);
return (0);
}
