#include <stdio.h>
#include <stddef.h>

int	ft_isalnum(int c);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strchr(const char *str, int ch);
int	ft_toupper(int c);
int	ft_tolower(int c);
size_t	strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);

int main()
{
	void *ptrv;
	char a[3] = {'1', '2', '3'};
	
	
	ptrv = &a;

	ft_memset(ptrv, 'h', 2);
	printf("%s", a);

//	i = strlen(&a);
//	printf("%d", i);	
//	if (ft_strchr(a, 'o'))
//		  printf("la letra 'o' se ha encontrado");
//	else
//		printf("la letra 'o' no se ha encontrado");
//	ft_strlcat(a, b, 9);
//	printf("%s", a);
//	ft_strlcpy(a, b, 7);
//	printf("%s", a);
	return (0);
}
