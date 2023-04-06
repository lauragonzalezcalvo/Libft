/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:59:29 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:42 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	if (!s)
		return (ft_strdup(""));
	if (len <= 0 || start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{	
		dest[i] = s[start];
		i ++;
		start ++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	printf("%s\n", ft_substr("camaleo", 9, 1 ));
}*/
