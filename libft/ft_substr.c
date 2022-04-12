#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char		*new_s;

	new_s = malloc(sizeof(char) * (len + 1));
	if (!s || !new_s)
		return (NULL);
	i = 0;
	while (start < ft_strlen((char *)s) && *(s + start + i) && i < len)
	{
		*(new_s + i) = *(s + start + i);
		i++;
	}
	*(new_s + i) = '\0';
	return (new_s);
}
