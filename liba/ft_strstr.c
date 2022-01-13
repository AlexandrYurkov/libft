#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*pneedle;
	const char	*phaystack;
	int			ok;

	ok = 1;
	pneedle = needle;
	phaystack = haystack;
	while (*phaystack && *pneedle)
		ok &= *phaystack++ == *pneedle++;
	if (*pneedle)
		return (NULL);
	if (ok)
		return ((char *)(haystack));
	pneedle = needle;
	while (*haystack && *needle)
		if (*haystack++ == *needle)
			needle++;
		else
		{
			haystack -= needle - pneedle;
			needle = pneedle;
		}
	return (*(needle) ? NULL : (char *)(haystack - (needle - pneedle)));
}
