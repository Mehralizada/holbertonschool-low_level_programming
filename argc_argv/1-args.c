#include "main.h"

/**
 * print_number_of_arguments - prints the number of arguments passed into it
 * @argc: the number of arguments
 *
 * Return: 0
 */
int print_number_of_arguments(int argc)
{
printf("%d\n", argc - 1);
return (0);
}

/**
 * main - entry point
 * @argc: the number of command line arguments
 * @argv: an array containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[] __attribute__((unused)))
{
(void) _putchar;
print_number_of_arguments(argc);
return (0);
}
