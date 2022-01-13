#include "libft.h"

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\r'
		|| c == '\f' || c == '\v' || c == '\t');
}
