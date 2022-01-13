#include "libft.h"

int		ft_tolower(int c)
{
	int		a;

	a = c >= 'A' && c <= 'Z' ? 1 : 0;
	return (a ? c + 'a' - 'A' : c);
}
