#include "libft.h"
char    ft_toupper(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return (ch - 32);
    return (ch);
}