#include <stdio.h>

/**
 *main - Output lower letters-q and e
 *
 *Return: 0 after succes
 */
int main(void)
{
char alpha, e, q;
alpha = 'a';
e = 'e';
q = 'q';
while (alpha <= 'z')
if (alpha != q && alpha != e)
putchar(alpha);
alpha++;
putchar('\n');
return (0);
}
