#include "main.h"
/**
 * -abs - Entry point
 *
 *  @r: r is variable name
 *
 *  Return: Always 0 (success)
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else
		return (r);
}
