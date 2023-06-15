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

	printf("Size of char: %zu bytes\n", sizeof(k));
	printf("Size of int: %zu bytes\n", sizeof(y));
	printf("Size of long int: %zu bytes\n", sizeof(L));
	printf("Size of long long int: %zu bytes\n", sizeof(Z));
	printf("Size of float: %zu bytes\n", sizeof(f));

	return (0);
}
