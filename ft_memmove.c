











#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_aux;
	unsigned char	*dst_aux;

	src_aux = (unsigned char *)src;
	dst_aux = (unsigned char *)dst;
	if (dst_aux < src_aux)
	{
		while (len--)
			*dst_aux++ = *src_aux++;
	}
	if (dst_aux > src_aux)
	{
		src_aux += len - 1;
		dst_aux += len - 1;
		while (len--)
			*dst_aux-- = *src_aux--;
	}
	return (dst);
}
