#include "libft.h"

void	ft_matfree(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	str = NULL;
}
