#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	if (size && count && (count > SIZE_MAX / size))
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}