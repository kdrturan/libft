#include "libft.h"
char *ft_strchr(char *str, char ch)
{
    while (*str)
    {
        if (*str == ch)
            return str;
        str++;
    }
    return 0;
}