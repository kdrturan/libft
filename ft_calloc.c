#include "libft.h"
void *calloc(size_t num_elements, size_t element_size)
{
    void* p_call;
    size_t size;
    size_t i;

    size =num_elements * element_size;
    p_call = (void *)malloc(size);
    if (!p_call)
        return (NULL);
    i = 0;
    ft_memset(p_call,0,size);
    return (p_call);
}