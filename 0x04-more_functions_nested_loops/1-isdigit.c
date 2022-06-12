#include "main.h"
/**
 * _isdigit - function
 *
 * @c: parameter
 *
 * Return: return value
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (0);
	else
		return (1);
}
