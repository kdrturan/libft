#include "libft.h"
char *strdup(const char *str)
{
    char* p_strdup;
    size_t i;
    size_t size;

    size = ft_strlen(str);
    p_strdup = (char *)malloc(size + 1);
    if (!p_strdup)
        return (NULL);
    i = 0;
    while (i < size)
    {
        p_strdup[i] = str[i];
        i++;
    }
    p_strdup[size] = '\0';
    return (p_strdup);
}