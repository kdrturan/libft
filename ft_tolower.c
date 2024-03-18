#include "libft.h"
char    ft_toupper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return (ch + 32);
    return (ch);
}