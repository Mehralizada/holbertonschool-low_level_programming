#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0') {
		c++;
		s++;
	}


	for (c -= 1; c >= 0; c--) {
		_putchar(*(s - c - 1));
	}

	_putchar('\n');
}
