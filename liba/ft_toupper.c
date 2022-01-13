#include "libft.h"

int		ft_toupper(int c)
{
	int		a;

	a = c >= 'a' && c <= 'z' ? 1 : 0;
	return (a ? c - 'a' + 'A' : c);
}
