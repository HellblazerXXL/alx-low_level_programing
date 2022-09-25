#include "main.h"
/**
 * _islower _ Entry point
 * @c: The character to print
 *
 * Return: Always o.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
