#include "libft.h"
char **ft_split(char const* s, char c)
{
    char** psplit;
    size_t peace;
    size_t i;
    size_t j;
    size_t index;


    index = 0;
    i = 0;
    peace = 0;
    while (s[i] == c)
        i++;
    j = i;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            peace++;
        while (s[i] != c && s[i])
            i++;
    }
    psplit = (char**)malloc(sizeof(char *) * (peace + 1));
    while (peace > 0)
    {
        while (s[j] == c)
            j++;
        i = j;
        while (s[j] != c && s[j])
            j++;
        if (j > i)
            psplit[index++] = ft_substr(s, i, j - i);
        peace--;
    }
    psplit[index] = 0;
    return (psplit);
}
