#include "libft.h"
void *ft_calloc(size_t num_elements, size_t element_size)
{
    void* p_call;
    size_t size;

    if (num_elements == 0 || element_size == 0)
	{
        num_elements = 1;
        element_size = 1;
    }
    size = num_elements * element_size;
    if (size / num_elements != element_size)
		return (NULL);
    p_call = (void *)malloc(size);
    if (!p_call)
        return (NULL);
    ft_memset(p_call,0,size);
    return (p_call);
}
