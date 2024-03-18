#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p_str;
	unsigned char	val;
	size_t			i;

	i = 0;
	val = (unsigned char)c;
	p_str = (unsigned char *)s;
	while (n && p_str[i] != val)
	{
		i++;
		n--;
	}
	if (n != 0)
		return ((void *)&p_str[i]);
	else
		return (0);
}
