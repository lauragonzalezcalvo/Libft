/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:59:29 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/27 10:41:49 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if(start >= len)
		return(ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL || s == NULL)
		return (NULL);
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("camaleo", 9, 1 ));
}*/
