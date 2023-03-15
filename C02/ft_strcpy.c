/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eturk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 13:07:51 by eturk             #+#    #+#             */
/*   Updated: 2022/10/23 13:21:52 by eturk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];//dest dizisiyle srcyi eşitle
		i++;
	}
	dest[i] = '\0';//String dizisinin bittiğini anlaması için nulla eşitle
	return (dest);
}
int	main()
{
	char src[] = "42istanbul";
	char src1[] = "42istanbul";
	char dest[] = "merhaba";
	char dest1[] = "merhaba";
	printf("%s", ft_strcpy(dest, src1));
}
