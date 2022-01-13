#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*str;
	const char	*start;
	const char	*end;

	if (!s)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	start = s;
	end = start;
	while (*start)
	{
		while (*start && !ft_isspace(*start))
			start++;
		end = start;
		while (*start && ft_isspace(*start))
			start++;
	}
	start = s;
	if (!(str = ft_strnew(end - s)))
		return (NULL);
	ft_strncpy(str, s, end - s);
	return (str);
}
