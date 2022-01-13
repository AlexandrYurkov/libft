#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		nbr;

	nbr = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			nbr = 2 + 48;
			write(fd, &nbr, 1);
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	nbr = n % 10 + 48;
	write(fd, &nbr, 1);
}
