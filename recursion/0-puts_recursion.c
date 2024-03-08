#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
		putchar(*s);
		s++;
		_puts_recursion(s);
}
