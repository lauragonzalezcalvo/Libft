/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:20:32 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/22 16:15:17 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0')  && (i < n))
	{
		i++;
	}
	return (str1 - str2);
}

int	main(void)
{
 char buffer1[] = "DWgaOtP12df0";
 char buffer2[] = "DWGAOTP12DF0";

 printf("%d\n", memcmp(buffer1, buffer2, 2));

 char buffer3[] = "DWgaOtP12df0";
 char buffer4[] = "DWGAOTP12DF0";

 printf("%d\n", ft_memcmp(buffer3, buffer4, 2));
}


