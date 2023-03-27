/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:42:27 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/27 13:54:16 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (dest == 0)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		dest[i] = s1[i];
		i++;
	}
	while (l < ft_strlen(s2))
	{
		dest[i + l] = s2[l];
		l++;
	}
	dest[i + l] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s", ft_strjoin("hola","que tal"));
}*/
