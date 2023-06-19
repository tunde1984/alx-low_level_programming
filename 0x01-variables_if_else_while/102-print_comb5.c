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
for (bas = ten; bas < 100; bas++)
{
if (ten != bas)
{
putchar('0' + (ten / 10));
putchar('0' + (ten % 10));
putchar(' ');
putchar('0' + (bas / 10));
putchar('0' + (bas % 10));
if (ten != 9 || bas != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
