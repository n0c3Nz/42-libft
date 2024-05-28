











#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_aux;
	char	*src_aux;

	if (!dst && !src)
		return (NULL);
	dst_aux = (char *)dst;
	src_aux = (char *)src;
	while (n)
	{
		*dst_aux = *src_aux;
		dst_aux++;
		src_aux++;
		n--;
	}
	return (dst);
}
