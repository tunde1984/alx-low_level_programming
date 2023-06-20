#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times
 */
void print_alphabet_x10(void)
{
int k;
int i;

for (i = 0; i < 10; i++)
{
for (k = 97; k <= 122; k++)
{
_putchar(k);
}
_putchar('\n');
}
}
