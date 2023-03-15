/*Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes a string and displays the string in reverse
order followed by the newline.(Bir dize alan ve dizeyi tersten görüntüleyen bir işlev yazın
sipariş ve ardından yeni satır.)
Its prototype is constructed like this : 
  char *ft_rev_print (char *str)
It must return its argument

Examples:

$> ./rev_print "zaz" | cat -e
zaz$
$> ./rev_print "dub0 a POIL" | cat -e
LIOP a 0bud$
$> ./rev_print | cat -e
$*/

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
		return (i);	
}

char *ft_rev_print(char *str)
{
	int	i;
	
	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write(1, &str[i],1);
		i--;
	}
	return (str);
}
int main()
{
	char str[] = "lubnatsi 24";
	ft_rev_print(str);
}













