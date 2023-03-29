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

char *ft_strtrim(char const *s1, char const *set)
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
	len = ft_strlen(s1);


	i = 0;
	//f = ft_strchr(set, s1[i]);//encontramos el caracter
	printf("%s\n", ft_strnstr(s1, set , len));
	printf("%s\n", ft_strchr(set, s1[i]));

	return(0);
}

int	main(void)
{
	printf("%s", ft_strtrim("0helo", "0"));
}
