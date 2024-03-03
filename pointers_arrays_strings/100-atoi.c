#include "main.h" 

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 * Return: An integer
 */
int _atoi(char *s)
{
int i = 0, n = 0, len = 0, digit = 0, sign = 1;


while (s[len] != '\0')
len++;


while (i < len)
{

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';


n = n * 10 + digit;

if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}

else if (s[i] == '-' && (i == 0 || s[i - 1] < '0' || s[i - 1] > '9'))
{
sign *= -1;
}
i++;
}

return (n *sign);
}
