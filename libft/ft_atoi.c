#include "libft.h"

int	ft_atoi(const char *str)
{
	int 		c;
	int 		n;
	long long 	value;

	c = 0;
	n = 1;
	value = 0;
	if(!str)
		return (0);
	while((*(str + c) >= '\t' && *(str + c) <= '\r') || *(str + c) == ' ')
		c++;
	if (*(str + c) == '-')
		n = -1;
	if (*(str + c) == '+' || *(str + c) == '-')
		c++;
	while (*(str + c) >= '0' && *(str + c) <= '9')
	{
		value = (value * 10) + (*(str + c) - '0');
		c++;
	}
	return (value * n);
}
