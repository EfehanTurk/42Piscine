/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------
Write a function that reverses (in-place) a string.
It must return its parameter.

(Bir dizeyi tersine �eviren (yerinde) bir i�lev yaz�n.
Parametresini d�nd�rmelidir.)

Your function must be declared as follows:
char    *ft_strrev(char *str);*/

#include <stdio.h>
int	ft_strlen(char	*str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
		return (i);
}
char	*ft_strrev(char	*str)
{
	int	i;
	int	len;
	char tmp;
	
	i = 0;
	len = ft_strlen(str) - 1;
	while(len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
		return (str);
}
int	main(void)
{
	char s[] = "lubnatsi 24";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}
