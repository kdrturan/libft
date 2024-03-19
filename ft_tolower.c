#include "libft.h"
char    ft_tolower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return (ch + 32);
    return (ch);
}