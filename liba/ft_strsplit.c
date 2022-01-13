#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen)
	{
		if (!*s)
			break ;
		len++;
		s++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_wc(char const *s, char c)
{
	unsigned int	wc;

	wc = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		wc++;
		while (*s && *s == c)
			s++;
	}
	return (wc);
}

void	ft_matfree(char **str, int i)
{
	while (--i >= 0)
		free(str[i]);
	free(str);
	str = NULL;
}

char	*ft_strdup(const char *src)
{
	char	*dup;

	dup = malloc(ft_strlen(src) + 1);
	if (dup == 0)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}


char	**ft_strsplit(char const *s, char c)
{
	char		**str;
	const char	*end;
	int			i;

	i = 0;
	if (!s || !(str = (char **)malloc((ft_wc(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (*s && *s == c)
		s++;
	while (*s)
	{
		end = s;
		while (*end && *end != c)
			end++;
		if (!(*(str + i++) = ft_strsub(s, 0, end - s)))
		{
			ft_matfree(str, i);
			return (NULL);
		}
		s = end;
		while (*s && *s == c)
			s++;
	}
	*(str + i) = NULL;
	return (str);
}
