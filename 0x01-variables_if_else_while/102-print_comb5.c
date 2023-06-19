#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ten;
int bas;
for (ten = 0; ten < 10; ten++)
{
for (bas = 0; bas < 10; bas++)
{
putchar('0' + ten);
putchar('0' + bas);
if (!(ten == 9 && bas == 9))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
