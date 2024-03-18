#include "libft.h"
void *memcpy(void *destination, const void *source, size_t num)
{
    unsigned char* d_cpy;
    const unsigned char* s_cpy;
    size_t i;

    i = 0;
    d_cpy = destination;
    s_cpy = source; 

    while (i < num)
    {
        *(d_cpy + i) = *(s_cpy + i);
        i++;
    }
    return (destination);
}