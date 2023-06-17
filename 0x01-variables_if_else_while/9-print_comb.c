#include <stdio.h>
/**
 * main - this is main function
 * Description: print all possible combination of single digit
 * Return: 0
 */
int main(void)
{
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
