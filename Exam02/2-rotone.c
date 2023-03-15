/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.
'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
The output will be followed by a \n.
If the number of arguments is not 1, the program displays \n.

(Bir dize alan ve onu görüntüleyen, her birinin yerini alan bir program yazýn.
alfabetik sýrayla bir sonrakine göre harfler.
'z' 'a' olur ve 'Z' 'A' olur. Dava etkilenmeden kalýr.
Çýktýyý a \n takip edecektir.
Baðýmsýz deðiþken sayýsý 1 deðilse, program \n görüntüler.)

Example:
$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
char get_char(char c)
{
	if((c >= 'a' && c <='y') || (c >= 'A' && c <= 'Y'))
		c+=1;
	else if(c == 'z' || c == 'Z')
		c-= 25;
	return (c);
}
int main (int ac, char **av)
{
	if(ac == 2)
		while(*av[1])
			ft_putchar(get_char(*av[1]++));
	write(1, "\n", 1);
	return (0);
}


