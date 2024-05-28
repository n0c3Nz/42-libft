#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*n;
	if (!s)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	n = ft_strdup(s);
	if (!n)
		return (NULL);
	while (i < size)
	{
		n[i] = f(i, s[i]);
		i++;
	}
	return (n);
}