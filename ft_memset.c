#include "libft.h"
void *memset(void *ptr, int value, size_t num)
{
    unsigned char* p_ptr = ptr;
    unsigned char val = (unsigned char)value;
    size_t i;

    i = 0;
    while (i < num)
    {
        p_ptr[i] = val;
        i++;
    }
}