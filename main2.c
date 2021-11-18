#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int main()
{
	char a[5] = "hola";
	char b[4] = "new";

	ft_strlcpy(a, b, 4);
	printf("%s", a);
	return(0);
}
