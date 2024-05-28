#include "libft.h"
void	ft_putnbr_fd(int n, int fd)
{
	long	m;
	char	str;
	m = (long)n;
	if (m < 0)
	{
		m *= -1;
		write(fd, "-", 1);
	}
	if (m > 9)
		ft_putnbr_fd(m / 10, fd);
	str = m % 10 + '0';
	write (fd, &str, 1);
}