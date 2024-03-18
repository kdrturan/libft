#include "libft.h"
char* ft_substr(char const* s, unsigned int start, size_t len)
{
    char* p_sstr;
    size_t i;
    size_t size;

    if ((ft_strlen(s) - start) > len)
        size = len;
    else
        size = (ft_strlen(s) - start);
    p_sstr = (char *)malloc(size + 1);
    i = 0;
    while (i < size)
    {
        p_sstr[i] = s[start];
        i++;
    }
    p_sstr[i] = '\0';
    return (p_sstr);
}