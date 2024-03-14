#include <stdlib.h>

unsigned int _strlen(char *str);

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = _strlen(s1);
len2 = _strlen(s2);

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < n; j++)
concat[i++] = s2[j];

concat[i] = '\0';

return (concat);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
unsigned int _strlen(char *str)
{
unsigned int len = 0;

while (str[len])
len++;

return (len);
}

