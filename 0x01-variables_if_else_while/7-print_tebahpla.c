#include <stdio.h>
/**
 * main - this is main function
 * Description: it print lower case alphabet in reverse
 * Return: 0
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}

