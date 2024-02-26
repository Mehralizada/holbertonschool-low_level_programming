#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
char c;

c = '0';
printf("%c: %d\n", c, isdigit(c));

c = 'a';
printf("%c: %d\n", c, isdigit(c));
return (0);
}
