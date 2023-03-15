/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:08:35 by eturk             #+#    #+#             */
/*   Updated: 2022/10/23 15:12:28 by eturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//harf hariç karakter girilirse 0, harf girilirse 1 döndüren fonksiyon
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			return (0);
		i++;
	}
	return (1);
}
int	main()
{
	printf("%d", ft_str_is_alpha("qweas"));
	printf("\n%d", ft_str_is_alpha("a12312sdfa"));
	printf("\n%d", ft_str_is_alpha("-as--dqweqw"));
    printf("\n%d",ft_str_is_alpha(""));
}
