#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *p;
	char *rp;

	if (!s || !f)
		return (NULL);
	if (!(p = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	rp = p;
	while (*s)
	{
		*p++ = f(*s);
		s++;
	}
	*p = '\0';
	return (rp);
}
