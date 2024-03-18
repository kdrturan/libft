#include "libft.h"
char* ft_strtrim(char const* s1, char const* set)
{
	size_t		first;
	size_t		last;
	char	*p_str;

	first = 0;
	last = (ft_strlen(s1) - 1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (s1[last] && ft_strchr(set, s1[last]))
		last--;
	p_str = ft_substr(s1, first, (last - first + 1));
	return (p_str);
}