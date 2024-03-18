#include "libft.h"
char* ft_strjoin(char const* s1, char const* s2)
{
    char* p_sjoin;
    size_t size1;
    size_t size2;
    size_t i;
    size_t j;

    size1 = ft_strlen(s1);
    size2 = ft_strlen(s2);
    p_sjoin = (char*)malloc(size1 + size2 + 1);
    if (!p_sjoin)
        return (NULL);
    i = 0;
    j = 0;
    while (i < size1)
    {
        p_sjoin[i] = s1[i];
        i++;
    }
    while (j < size2)
    {
        p_sjoin[i] = s1[j];
        i++;
        j++;
    }
    p_sjoin[i] = '\0';
    return (p_sjoin);
}