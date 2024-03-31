#include "libft.h"
char *ft_strchr(const char *str,int ch)
{
    while (*str)
    {
        if (*str == (char)ch)
            return ((char*)str);
        str++;
    }
    if (ch == 0)	    
    	return ((char*)str);
    return (0);
}
