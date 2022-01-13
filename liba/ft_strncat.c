#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*pd;
	char	*ps;
	size_t	l;

	pd = s1;
	s1 += ft_strlen(s1);
	ps = (char *)s2;
	l = 0;
	while (*(ps + l))
	{
		if (l == n)
			break ;
		l++;
	}
	*(s1 + l) = '\0';
	ft_memcpy(s1, s2, l);
	return (pd);
}
