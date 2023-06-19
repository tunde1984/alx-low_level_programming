#include <stdio.h>
/**
 * main - This is the main function
 * Description: It prints numbers 0-9 and lowercase alphabets a-f
 * Return: 0
 */
int main(void)
{
int n;
int m;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (m = 97; m <= 102; m++)
{
putchar(m);
}
putchar('\n');
return (0);
}
