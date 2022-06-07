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
	char lc;
	char Uc;
	for ( lc = 'a'; lc <= 'z'; lc++)
	putchar(lc);
	for ( Uc = 'A'; Uc <= 'Z'; Uc++)
	putchar(Uc);
	putchar('\n');
	return (0);
}
	
