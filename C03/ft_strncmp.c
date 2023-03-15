#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);//n tane karakteri dene ilk farklı olduğu yerde farkını ver
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
int	main()
{
	printf("%d", ft_strncmp("Hello", "HelloWorld", 8));//-87
}
