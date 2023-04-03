/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:19:03 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/03 11:27:28 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función split() toma dos argunmentos, el string a separar s y el character * delimitador. La función va a separar en strings distintos cada bloque del  
 * string que esté entre los delimitadores.
 * VALOR DEVUELTO
 * Devuelve un array de arrays, una matriz, con las strings resultantes de la 
 * separación.
 */

#include"libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i-1] == c)
			counter++;
		i++;
	}
	return(counter);
}

char **ft_split(char const *s, char c)
{
	char	**numberwords;
	// porque ponemos un char si lo que devolvemos es un int
	// necesitaos saber el numero de palabras para malloc
	numberwords = (char **)malloc(sizeof(char *) * (ft_countwords(s, c)) + 1);
	//printf("%d", ft_countwords(s, c));
	

	return(numberwords);
}

int main(void)
{
	printf("%d", ft_countwords("---hola--que--tal", '-'));
	printf("%s", *ft_split("---hola--que--tal", '-'));
}
