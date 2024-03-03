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


    if (len == 0)
        return 0;


    while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }


    while (i < len && s[i] >= '0' && s[i] <= '9')
    {
        digit = s[i] - '0';
       
   	if (sign == 1 && (n > INT_MAX / 10 || (n == INT_MAX / 10 && digit > INT_MAX % 10)))
            return INT_MAX;
        else if (sign == -1 && (n > -(INT_MIN / 10) || (n == -(INT_MIN / 10) && digit > -(INT_MIN % 10))))
            return INT_MIN;
        n = n * 10 + digit;
        i++;
    }

    return n * sign;
}
