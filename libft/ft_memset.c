#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*x;

	i = 0;
	x = (char *)s;
	while (i < n)
	{
		*(x + i) = c;
		i++;
	}
	return (s);
}
