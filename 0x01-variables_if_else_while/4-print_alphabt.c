#include <stdio.h>

/**
 *main - Output lower letters-q and e
 *
 *Return: 0 after succes
 */
int main(void)
{
char alpha, e, q;
e = 'e';
q = 'q';
for (alpha = 'a'; alpha <= 'z'; alpha++)
if (alpha != q && alpha != e)
putchar(alpha);
putchar('\n');
return (0);
}
