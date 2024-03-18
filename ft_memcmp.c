#include "libft.h"
int memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    char* p_ptr1;
    char* p_ptr2;
    size_t i;

    i = 0;
    p_ptr1 = (char *)ptr1;
    p_ptr2 = (char *)ptr2;
    while(i < num)
    {
       if(p_ptr1[i] == p_ptr2[i])
            i++;
        else
            return (p_ptr1[i] - p_ptr2[i]);
    }
    return (0);
}
