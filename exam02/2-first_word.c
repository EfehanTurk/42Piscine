/*Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays its first word, followed by a
newline.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or if there are no words, simply display
a newline.

(Bir dize alan ve ilk s�zc���n� g�r�nt�leyen bir program yaz�n, ard�ndan
haber hatt�.
S�zc�k, bo�luklarla / sekmelerle veya sat�r�n ba�lang�c� / sonu ile s�n�rland�r�lm�� bir dize b�l�m�d�r.
dize.
Parametre say�s� 1 de�ilse veya kelime yoksa, basit�e g�r�nt�leyin
yeni bir sat�r.)

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

/*#include <unistd.h>
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		while(*av[1] && (*av[1] == '\t' || *av[1] == ' '))
			av[1]++;
		while(*av[1] && (*av[1] == '\t' && *av[1] == ' '))
				write(1, av[1]++,1);
	}
	write(1, "\n", 1);
	return (0);
}*/
#include <unistd.h>

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


















