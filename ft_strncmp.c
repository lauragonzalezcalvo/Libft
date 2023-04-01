/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:59:17 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 19:56:26 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (((str1[i] != '\0' && str2[i] != '\0')
			&& (str1[i] == str2[i])) && i < n)
		i++;
	while ((str1[i] != str2[i]) && (i < n))
		return (str1[i] - str2[i]);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", strncmp("hellos", "helloh", 6));
    printf("%d\n", ft_strncmp("hellos", "helloh", 6));
}*/
