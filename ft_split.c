#include "libft.h"
char **ft_split(char const* s, char c)
{
    char** psplit;
    int peace;
    int i;
    int j;
    int index;

    index = 0;
    i = 0;
    peace = 0;
    while (s[i] == c)
        i++;
    j = i;
    while (s[i])
    {
        if (s[i] == c)
        {
            peace++;
            while (s[i] == c)
                i++;
        }
        while (ft_isprint(s[i]) && s[i] != c)
            i++;       
    }
    psplit = (char**)malloc(peace + 2);
    while (s[j])
    {
        while (s[j] == c)
            j++;
        i = j;
        while (ft_isprint(s[j]) && s[j] != c)
            j++;
        psplit[index++] = ft_substr(s, i, j - i);
    }
    psplit[index] = NULL;
    return (psplit);
}