#include "libft.h"
int ft_strncmp(char *str1, char* str2, size_t n)
{
    int i;

    i = 0;
    while ((str1[i] == str2[i]) && i < n)
        i++;
    return (str1[i] - str2[i]);
}