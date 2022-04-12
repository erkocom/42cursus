#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*ret;

	i = 0;
	len = ft_strlen(s);
	ret = (char *)malloc(len * sizeof(char) + 1);
	while (i < len)
	{
		*(ret + i) = *(s + i);
		i++;
	}
	*(ret + i) = '\0';
	return (ret);
}
