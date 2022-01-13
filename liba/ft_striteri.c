#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t q;

	q = 0;
	if (!s || !f)
		return ;
	while (*(s + q))
	{
		f(q, s + q);
		q++;
	}
}
