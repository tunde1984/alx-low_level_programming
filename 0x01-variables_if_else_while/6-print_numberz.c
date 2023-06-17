#include <stdio.h>
/**
 * main - this is the main function
 * Description: its print out numbers from base 10 to 0
 * Return: 0
 */
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + 48);
}
putchar('\n');
return (0);
}
