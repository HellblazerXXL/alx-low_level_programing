#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: o (success)
 */

int main(void)
{
	char character;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf("size of a char: %lu byte(s)\n", sizeof acharacter));
	printf("size of an int: %lu byte(s)\n", sizeof (ainteger));
	printf("size of a long int: %lu bytes(s)\n", sizeof (along));
	printf("size of a long long int: %lu bytes(s)\n", sizeof(alonglong));
	printf("size of a float: %lu bytes(s)ln", sizeof(afloat));

	return (0);
}