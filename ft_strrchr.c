#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	const char		*l;
	unsigned char	aux;
	aux = (unsigned char)c;
	l = s;
	while (*s)
		s++;
	while (s != l)
	{
		if (*s == aux)
			return ((char *)s);
		s--;
	}
	if (*s == aux)
		return ((char *)s);
	return (NULL);
}