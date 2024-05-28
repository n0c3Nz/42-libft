#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	aux;
	unsigned char	*ptr;
	ptr = b;
	aux = (unsigned char)c;
	while (len > 0)
	{
		*ptr = aux;
		ptr++;
		len--;
	}
	return (b);
}