#include "libft.h"
void bzero(void *ptr, size_t num)
{
    unsigned char* p_ptr = ptr;
    size_t i;

    i = 0;
    while (i < num)
    {
        p_ptr[i] = 0;
        i++;
    }
}