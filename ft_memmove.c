#include "libft.h"
void	*ft_memmove(void *destination, const void *src, size_t num)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if (!destination && !src)
		return (destination);
	if (src > destination)
	{
		destination = ft_memcpy(destination, src, num);
		return (destination);
	}
	else
	{
		p_dest = (unsigned char *)destination;
		p_src = (unsigned char *)src;
		while (num--)
			p_dest[num] = p_src[num];
		return (destination);
	}
}
