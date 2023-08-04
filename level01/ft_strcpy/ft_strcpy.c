#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (!dest || !src)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/*
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char	a[] = "Bitcoin";
	char	b[] = "Ethereum";
	int		n;

	n = 20;
	printf(":%s: || :%s:\n", a, b);
	printf("%s\n", ft_strcpy(a, b));
	//printf("%s\n", strcpy(a, b));
	printf("n = %d\n", n);
	printf(":%s: || :%s:\n", a, b);
	return (0);
}
*/