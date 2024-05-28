#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	size;
	if (s)
	{
		i = 0;
		size = ft_strlen(s);
		while (i < size)
		{
			f(i, &s[i]);
			i++;
		}
	}
}