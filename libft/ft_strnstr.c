#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (*(little) == '\0')
		return ((char *)big);
	while (*(big + b) != '\0')
	{
		l = 0;
		while (*(big + b + l) == *(little + l) && (b + l) < len)
		{
			if (*(big + b + l) == '\0' && *(little + l) == '\0')
				return ((char *)(big + b));
			l++;
		}
		if (*(little + l) == '\0')
			return ((char *)(big + b));
		b++;
	}
	return (0);
}
