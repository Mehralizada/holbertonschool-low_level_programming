#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @c: The number to be checked
 * Return: 1 for positive num, -1 for negative num  or 0 for anything else
 */

int print_sign(int c)

{
if (c > 0)
{
_putchar(43);
return (1);
}
else if (c < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
