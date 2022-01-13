#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t slen;
	size_t dlen;

	slen = (size_t)ft_strlen(src);
	dlen = (size_t)ft_strnlen(dst, size);
	if (dlen == size)
		return (size + slen);
	if (slen < size - dlen)
		ft_strncpy(dst + dlen, src, slen + 1);
	else
	{
		ft_strncpy(dst + dlen, src, size - dlen - 1);
		*(dst + size - 1) = '\0';
	}
	return (dlen + slen);
}
