#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Description: This function prints all natural numbers from the given
 * starting number 'n' up to 98, inclusive, separated by a comma and space.
 * If 'n' is greater than 98, it prints the numbers in descending order.
 * If 'n' is 98, it prints only 98.
 */
void print_to_98(int n)
{


int i;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
