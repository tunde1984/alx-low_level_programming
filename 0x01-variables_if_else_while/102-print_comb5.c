#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int num1, num2;

int firstOutput = 1;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1; num2 <= 99; num2++)
{
if (num2 != num1)
{
if (!firstOutput)
{
putchar(',');
putchar(' ');
}
else
{
firstOutput = 0;
}
putchar('0' + (num1 / 10));
putchar('0' + (num1 % 10));
putchar(' ');
putchar('0' + (num2 / 10));
putchar('0' + (num2 % 10));
}
}
}
putchar('\n');
return (0);
}
