#include "libft.h"

void	ft_putnbr(int n)
{
	int		nbr;

	nbr = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		if (n == -2147483648)
		{
			nbr = 2 + 48;
			write(1, &nbr, 1);
			n = -147483648;
		}
		n *= -1;
	}
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	nbr = n % 10 + 48;
	write(1, &nbr, 1);
}
