#include <stdio.h>
#include <string.h>

int		find_char(const char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		++str;
	}
	return (0);
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (find_char(*s1, s2) == 1)
			return ((char *)s1);
		++s1;
	}
	return (0);
}

//--------------------------------------------------------------
// #include <stdio.h>
// #include <string.h>

// int		main(void)
// {
// 	printf("ft: %s; real: %s\n", \
// 		ft_strpbrk("This is a string to search in", "qxd"), \
// 		strpbrk("This is a string to search in", "qxd")
// 		);

// 	printf("ft: %s; real: %s\n", \
// 		ft_strpbrk("This is a string to search in", "sh"), \
// 		strpbrk("This is a string to search in", "sh")
// 		);
// }

int main ()
{
  char str[] = "Ethereum";
  char key[] = "hrum";
  char * pch;

  printf ("%s: \n",str);
  pch = strpbrk(str, key);
  /*while (pch != NULL)
  {
    printf ("%c " , *pch);
    pch = strpbrk (pch+1,key);
  }*/
  printf("res: %s", pch);
  printf ("\n");
  return 0;
}

/*Imprime el string desde que encuentra el primer caracter del string2*/