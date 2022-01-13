#include "libft.h"

void	ft_putstr(char const *s)
{
	int		i;

	if (!s)
		return ;
	i = ft_strlen(s);
	write(1, s, i);
}
