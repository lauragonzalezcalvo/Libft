/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:19:03 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/03 12:00:25 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * La función split() toma dos argunmentos, el string a separar s y 
 el character * delimitador. La función va a separar en strings 
 distintos cada bloque del  
 * string que esté entre los delimitadores.
 * VALOR DEVUELTO
 * Devuelve un array de arrays, una matriz, con las strings resultantes de la 
 * separación.
 */
#include "libft.h"

int	ft_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while ((s[i] != '\0') && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_len(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

char	**ft_free(char **str, int j)
{
	while (0 < j)
	{	
		free(str++);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char *) * ((ft_count(s, c)) + 1));
	if (!str)
		return (0);
	while (j < (ft_count(s, c)))
	{
		while (s[i] == c)
			i++;
		str[j] = ft_substr(s, i, ft_len(s, c, i));
		i = i + ft_len(s, c, i);
		if (!*str)
		{
			return (ft_free(str, j));
		}
		j++;
	}
	str[j] = 0;
	return (str);
}
/* int main(void)
{
	char **arrayresult;
	arrayresult = ft_split("    ", ' ');
	int i = 0;
	while (arrayresult[i] !='\0')
	{
		printf("%s\n hola soy arrayresult:", arrayresult[i]);
		i++;
	}
	// char **arrayresult2;
	// arrayresult2 = ft_split("12", ' ');
	// int o = 0;
	// while (arrayresult2[o] !='\0')
	// {
	// 	printf("%s\n", arrayresult2[o]);
	// 	o++;
	// }
} */