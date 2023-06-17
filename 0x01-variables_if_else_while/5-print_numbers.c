#include <stdio.h>
/**
 * main - this is the main function of the program
 * Description: It prints all single digit number in base 10 from 0
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

