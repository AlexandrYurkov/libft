#include "libft.h"

int		ft_isbase(int c, int base)
{
	if (ft_isdigit(c))
		return (c - '0' < base);
	if (ft_isalpha(c) && base > 10)
		return (c - 'a' + 10 < base);
	return (0);
}
