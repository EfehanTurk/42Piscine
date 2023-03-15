/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline.

(Bir dize alan ve onu görüntüleyen, her birinin yerini alan bir program yazýn.
harfe göre harfler alfabetik sýrayla 13 boþluk önde.
'z' 'm' olur ve 'Z' 'M' olur. Dava etkilenmeden kalýr.
Çýktýyý bir satýrsonu takip edecektir.
Baðýmsýz deðiþken sayýsý 1 deðilse, program yeni bir satýr görüntüler.)

Example:
$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
char get_char(char c)
{
	if(c >= 'a' && c <= 'm' || c >= 'A' && c <= 'M')
		c += 13;
		else if(c >= 'n' && c <= 'z' || c >= 'N' && c <= 'Z')
		c -= 13;
		return (c);
}
int	main(int ac, char **av)
{
	if(ac == 2)
		while(*av[1])
			ft_putchar(get_char(*av[1]++));
				write(1, "\n", 1);
					return (0);
}

















