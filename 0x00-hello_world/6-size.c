#include <stdio.h>
/**
 * Main - Starting point
 *
 * Return 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float e;

	printf("size of a char: %ld byte(s)\n", sizeof (a));
	printf("size of an int: %ld byte(s)\n", sizeof (b));
	printf("size of a long int: %ld byte(s)\n", sizeof (c));
	printf("size of a long long: %ld byte(s)\n", sizeof (d));
	printf("size of a float: %ld byte(s)\n", sizeof (e));
	return (0);
}

