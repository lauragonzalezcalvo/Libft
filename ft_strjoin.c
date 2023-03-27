/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 10:42:27 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/27 11:55:55 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*dest;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	dest = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	while ( i < ft_strlen(str1))
	{
		dest[i] = str1[i];
		i++;
	}
	while ( l < ft_strlen(str2))
	{
		dest[i + l] = str2[l];
		l++;
	}
	dest[i + l] = '\0';
    return dest;		
}

int	main(void)
{
	printf("%s", ft_strjoin("hola","que tal"));
}
