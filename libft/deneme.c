#include <stdio.h>
#include "libft.h"

int main(void)
{
	/*
	char *c = "hello";
	char *i = "xxxxx";
	char **x = &c;
	printf("%p\n", x);
	printf("%p\n", &c);
	printf("%p\n", x+1);
	printf("%p\n", &i);
	printf("%ld", sizeof(char *));
	
	char *l;

	l = (char *)ft_calloc(2, 3);
	printf("%p\n", l);
	printf("%d\n", *l);
	printf("%d\n", *(l+3));
	printf("%p\n", l+3);
	*/

	char arr[] = "xy";
	int x = 0;
	arr[x++] = 'c';
	printf("%c, %c", arr[0], arr[1]);
	


}
