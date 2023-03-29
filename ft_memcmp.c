/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:20:32 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/22 16:40:29 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
 char buffer1[] = "DWgaOtP12df0";
 char buffer2[] = "DWGAOTP12DF0";

 printf("%d\n", memcmp(buffer1, buffer2, 1));

 char buffer3[] = "DWgaOtP12df0";
 char buffer4[] = "DWGAOTP12DF0";

 printf("%d\n", ft_memcmp(buffer3, buffer4, 1));
}*/
