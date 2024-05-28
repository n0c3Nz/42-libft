











#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	l;
	size_t			i;

	l = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i++;
	}
	if (l == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}
