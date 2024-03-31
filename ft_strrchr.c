#include "libft.h"
char *ft_strrchr(char *str, int ch)
{
    int i;

    i = 0;

    while (*str)
    {
        str++;
        i++;    
    }
    while (i >= 0)
    {
        if (*str == (char)ch)
            return str;
        str--;
        i--;
    }
    return 0;
}