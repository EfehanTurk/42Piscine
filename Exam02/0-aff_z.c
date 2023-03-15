#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if(argc <= 1)//baðýmsýz deðiþken 2 deðilse, çýktýda "z" görüntülenir.
		write(1, "z", 1);
	else 
	{
	while(argv[1][i])//ilk argümanýn indeksindeyken
	{
		if(argv[1][i] == 'z')//dizin 'z' deðerine eþitse
		{
			write(1, "z", 1);
			break;//ilk 'z' gördüðün yerde yazdýr ve döngüden çýk
		}
		i++;//'z'yý bulana kadar dön
	}
	}
		write(1, "\n", 1);
		return (0);
}
