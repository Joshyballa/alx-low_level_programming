#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: The string to be printed.
 *
 */

void _puts_recursion(char *s)
{
	s = "lpa\0"
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);

}
