/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:20:36 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/29 11:22:01 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s, char const *set)
{
	// size_t	i;
	// size_t	l;
	// size_t	set_len;

	// if (!s1 || !set)
	// 	return (NULL);
	// i = 0;
	// while (s1[i] != '\0' && ft_strchr(set, s1[i]))
	// 	i ++;
	// l = ft_strlen(s1);
	// while (l > 0 && ft_strchr(set, s1[l]))
	// 	l --;
	// set_len = (l + 1) - i; 
	// return (ft_substr(s1, i, set_len));

	size_t	i;
	size_t	len;
	len = ft_strlen(s);
	char *s1;
	s1 = (char *)s;
	size_t	j;

	i = 0;
	if (s1[0] == '\0')
		return (s1);
	while (s1[i] != '\0' && i < len -1 )
	{
		j = 0;
		while (s1[i + j] == set[j] && i + j < len && set[j] != '\0')
			j++;
		if (s1[j] == set[j])
			return (&s1[i]);
		i++;
	}

	//f = ft_strchr(set, s1[i]);//encontramos el caracter
	//printf("Soy strlen:%zu\n", len);
	//printf("Soy strnstr:%s\n", ft_strnstr(s1, set , 9));
	//printf("%s\n", ft_strchr(set, s1[i]));

	return(0);
}
/*
int	main(void)
{
	printf("Soy strtrim:%s", ft_strtrim("esto es una cadena", "es"));
}*/
