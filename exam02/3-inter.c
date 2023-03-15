/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.

(iki argümanda da olan harfleri yaz
Ama aynı zamanda aynı harfi iki defa yazma
Bağımsız değişken sayısı 2 değilse, program \n görüntüler.)

Examples:
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/

#include <unistd.h>

void print_chars(char *s1, char *s2)
{
	int tab[256] = {0};
	int i;
	
	i = 0;
	while(s2[i])
		tab[(int)s2[i++]] = 1;
	i = 0;
	while(s1[i])
	{
		if (tab[(int)s1[i]] == 1)
		{
			write(1, &s1[i], 1);
			tab[(int)s1[i]] = 2;
		}
		i++;
	}
}
int	main(int ac, char **av)
{
	if(ac == 3)
		print_chars(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}




















