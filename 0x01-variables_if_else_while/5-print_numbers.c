#include <stdio.h>
/**
 * Main - entry point
 * Description: It prints singlr digit number.
 * Return: 0
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar('0' + number);
}
putchar('\n');
return (0);
}

