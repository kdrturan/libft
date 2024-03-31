#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;
	size_t	j;

	i = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	else if (len == 0)
		return (NULL);
	while (big[i] && i <= (len - l_len))
	{
		j = 0;
		while (big[i] == little[j] && big[i])
			j++;
		if (j == l_len)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}