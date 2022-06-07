#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)

{
	int num;
	char lsb;

	for (num = 0; num <= 9; num++)
		putchar((num % 16) + '0');

	for (lsb = 'a'; lsb <= 'f'; lsb++)
		putchar(lsb);
	putchar('\n');
	return (0);
}
