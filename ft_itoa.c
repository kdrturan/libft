#include "libft.h"
char* ft_itoa(int n)
{
    char* p_itoa;
    size_t size;
    size_t i;
    long	num;
    long num2;

    num = (long)n;
    i = 0;
    size = 1;
    if (num < 0)
    {
        num *= -1;
        size++;
    }
    num2 = num;
    while (num > 9)
    {
        num /= 10;
        size++;
    }
    p_itoa = (char*)malloc(size + 1);
    if (n < 0)
    {
        p_itoa[i++] = '-';
    }
    p_itoa[size] = '\0';
    while (size > i)
    {
        size--;
        p_itoa[size] = (num2 % 10) + 48;
        num2 /= 10;
    }
    return (p_itoa);
}
