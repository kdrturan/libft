#include "libft.h"
int ft_isprint(int ch)
{
    if (ch >= 32 && ch <= 127)
        return (1);
    else    return (0);
}