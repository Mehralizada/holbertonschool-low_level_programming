#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;

while (*s)
{
found = 0;
char *tmp_accept = accept;
while (*tmp_accept)
{
if (*s == *tmp_accept)
{
found = 1;
break;
}
tmp_accept++;
}
if (!found)
{
break;
}
s++;
count++;
}
return (count);
}
