/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:43:02 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/05 17:30:48 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Busca la primera aparicion del caracter c en el strign str. 
 Devuelve el string a partir del caracter introducido. 
 Sino lo contiene devuelve null*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	charcpy;
	int		i;

	charcpy = (char) c;
	i = 0;
	while (s[i] && s[i] != charcpy)
		i++;
	if (s[i] == charcpy)
		return ((char *) &s[i]);
	return (NULL);
}

/*
int main(void)
{
    printf("%s\n", strchr("hello", 'h'));
    printf("%s\n", ft_strchr("hello", 'h'));
}*/
