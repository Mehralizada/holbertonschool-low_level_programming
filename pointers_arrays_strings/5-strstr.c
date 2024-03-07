#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring needle.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *start = haystack;
char *pattern = needle;

while (*pattern != '\0' && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (*pattern == '\0')
{
return (start);
}

haystack = start + 1;
}

return (NULL);
}
