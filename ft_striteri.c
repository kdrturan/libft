#include "libft.h"
char* ft_strmapi(char* s, void (*f)(unsigned int , char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
	    f(i, &s[i]);
		i++;
	}
	return (s);
}