#include <stdio.h>
/**
 * main - entry point
 * Return: (0)
 */
int main(void)
{
	char k;
	int y;
	long int L;
	long long int Z;
	float f;

	printf("Size of a char: %lu bytes\n", sizeof(k));
	printf("Size of an int: %lu bytes\n", sizeof(y));
	printf("Size of a long int: %lu bytes\n", sizeof(L));
	printf("Size of a long long int: %lu bytes\n", sizeof(Z));
	printf("Size of a float: %lu bytes\n", sizeof(f));

	return (0);
}
