#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	if ((p = malloc(size)))
		ft_memset(p, 0, size);
	return (p);
}
