/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:32:18 by eturk             #+#    #+#             */
/*   Updated: 2022/10/23 15:46:30 by eturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))//ascii tablosu decimal sette a'dan z'ye değilse
		{
			return (0);
		}
		i++;
	}
	return (1);
}
int		main(void)
{
	char lowercase[] = "asdfgkjdshjhjkbxcjbvjbkjbqbrk";
	char *p_lwr;
	p_lwr = lowercase;

	char special[] = "abcdASDASKLDNLJKAShijklmnopqrstuvwxyz_";
	char *p_spe;
	p_spe = special;

	char bos[] = "";
	char *p_bos;
	p_bos = bos;

	printf("%s = %d\n", lowercase, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", special, ft_str_is_lowercase(p_spe));
	printf("Bos = %d\n-----\n", ft_str_is_lowercase(p_bos));

	return (0);
}
