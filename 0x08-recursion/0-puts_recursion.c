#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * Description - function that prints a string, followed by a new line.
 * @s: The string to be printed.
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
