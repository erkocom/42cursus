#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	d;
	size_t	l;

	l = ft_strlen(dst) + ft_strlen(src);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (*(src + d) != 0 && c + 1 < size)
	{
		*(dst + c) = *(src + d);
		c++;
		d++;
	}
	*(dst + c) = 0;
	return (l);
}
