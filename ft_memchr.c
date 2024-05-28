#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	m;
	unsigned char	*str;
	i = 0;
	m = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == m)
			return (&str[i]);
		i++;
	}
	return (NULL);
}