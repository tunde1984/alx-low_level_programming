#include <stdio.h>
/**
 * main - entry point
 * Decription: script that print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}

