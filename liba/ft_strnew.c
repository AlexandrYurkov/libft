#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*s;

	if ((s = (char*)malloc(n + 1)))
		ft_memset(s, 0, n + 1);
	return (s);
}
