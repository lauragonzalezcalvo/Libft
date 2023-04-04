/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:20:36 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/04 10:57:28 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	set_len;

	if (!s || !set )
		return (NULL);
	i = 0;
	while (s[i] != '\0' && ft_strchr(set, s[i]))
	{
		i ++;
		printf("hello primer condicional");
	}
	if (!ft_strchr(set, s[i]))
		return ((char *)set);
	l = ft_strlen(s);
	while (l > 0 && ft_strchr(set, s[l]))
	{
		l --;
		printf("hello segundo condicional");
	}
		
	set_len = (l + 1) - i;
	return (ft_substr(s, i, set_len));
}
/*
int	main(void)
{
	printf("Soy strtrim: %s", ft_strtrim("\t\t\n\n\n\n\t", ""));
}*/