#include "libft.h"
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_len;
	size_t	i;

	i = 0;
	l_len = ft_strlen(little);
	if (l_len == 0)
		return ((char *)big);
	else if (len == 0)
		return (NULL);
	while (big[i] && i <= (len - l_len))
	{
		if (ft_strncmp(&big[i], little, l_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}