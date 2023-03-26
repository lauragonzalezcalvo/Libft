/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:59:29 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/23 16:28:31 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Reserva (con malloc(3)) y devuelve una substring de
la string ’s’.
La substring empieza desde el índice ’start’ y
tiene una longitud máxima ’len’.*/

#include"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	// size_t	length;

	
	//str = (char *)s;
	i = 0;
	// length = ft_strlen(str);
	//Hay que reservar la cantidad de memoria necesaria para almacenar la subcadena de longitud 'len'.
	str = (char *)malloc(sizeof(char) * (len + 1));
	while(i < len)
	{
		str[i]=s[start];
		i++;
		start++;
	}
	str[i] = '\0'; // asegura que la cadena resultante finalice con un carácter nulo
	return(str);
}

int	main(void)
{
	printf("%s\n", ft_substr("mercacona", 1, 2));
}
