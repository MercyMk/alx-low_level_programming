#include "main.h"
/**
 * _islower - checks for lowercase character
 *  @c: The character to check
 * Return: ! only for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
