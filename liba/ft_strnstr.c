#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	const char *pfind = find;

	if (!*find)
		return ((char *)s);
	while (len-- && *s && *find)
		if (*s++ == *find)
			find++;
		else
		{
			s -= find - pfind;
			len += find - pfind;
			find = pfind;
		}
	return (*find ? NULL : (char *)(s - (find - pfind)));
}
