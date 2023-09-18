#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercases
 * Return: Void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
