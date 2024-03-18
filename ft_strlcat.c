#include "libft.h"
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_count;
	size_t	s_count;
	size_t	d_len;
	size_t	s_len;

	d_count = 0;
	s_count = 0;
	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	if (size == 0 || size <= d_len)
		return (size + s_len);
	while (dest[d_count])
		d_count++;
	while (s_count < size - d_len - 1 && src[s_count])
		dest[d_count++] = src[s_count++];
	dest[d_count] = '\0';
	return (d_len + s_len);
}