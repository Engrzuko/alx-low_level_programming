#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Writtinh alphabet
 *
 * Return: 0
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != 'q' && ls != 'e')
		putchar(ls);
	}
	putchar('\n');
	return (0);
}
