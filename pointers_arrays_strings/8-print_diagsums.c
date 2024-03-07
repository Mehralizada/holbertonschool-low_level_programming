#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
int i;
long sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);
}
for (i = 0; i < size; i++)
{
sum2 += *(a + i * size + (size - 1 - i));
}
printf("%ld, %ld\n", sum1, sum2);
}
