#include "libft.h"
char* ft_itoa(int n)
{
    char* p_itoa;
    size_t size;
    size_t i;
    int	num;

    num = n;
    i = 0;
    size = 1;
    if (n == -2147483648)
        return ("-2147483648");
    if (n < 0)
    {
        n *= -1;
        size++;
    }
    while (n > 9)
    {
        n /= 10;
        size++;
    }
    p_itoa = (char*)malloc(size + 1);
    if (num < 0)
    {
        p_itoa[i++] = '-';
        num *= -1;
    }
    p_itoa[size] = '\0';
    while (size > i)
    {
        size--;
        p_itoa[size] = (num % 10) + 48;
        num /= 10;
    }
    return (p_itoa);
}