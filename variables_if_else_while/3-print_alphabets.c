#include <stdio.h>


/**
 * main - function of the task
 *
 * Return: always zero
 */
int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);

for (i = 'A'; i <= 'Z'; i++)
putchar(i);

putchar('\n');

return (0);
}
