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
 * La función split() toma dos argunmentos, el string a separar s y el character * delimitador. La función va a separar en strings distintos cada bloque del  
 * string que esté entre los delimitadores.
 * VALOR DEVUELTO
 * Devuelve un array de arrays, una matriz, con las strings resultantes de la 
 * separación.
 */
#include "libft.h"

int ft_countwords(char const *s, char c)
{
	int i;
	int counter;
	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i - 1] == c) || (s[i] != c && s[i] == s[0]))
			counter++;
		i++;
	}
	return (counter);
}
int ft_strlength(char const *s, char c)
{
	int length;
	length = 0;
	while (s[length] != c && s[length] != '\0')
		length++;
	
	return (length);
}
// en lugar de printarray ---> substring
/* char *ft_printarray(char const *s, char c)
{
	char *new;
	int j;
	int k;
	k = 0;
	j = 0;
	printf("%c  \n", c);
	printf("%s \n", s);
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			new = malloc(sizeof(char) * (ft_strlength(&s[j], c) + 1));
			k++;
		}
		j++;
	}
	return (new);
}
 */
void 	ft_free(char **matrix, int p)
{
	while (p >= 0)
	{
		free(matrix[p]);
		p--;
	}
	free(matrix);
	
}
char **ft_split(char const *s, char c)
{
	char **matrix;
		if (!s)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (ft_countwords(s, c)) + 1);

	if (matrix == NULL)
		return (NULL);
	int p;
	int	i;
	p = 0;
	i =  0;

	while (p < ft_countwords(s, c))
	{
		if  (s[i] != c)
		{	
			matrix[p] = ft_substr(s, i, ft_strlength(&s[i],c));
			if (matrix[p] == NULL)
					{
						ft_free(matrix, p);
						return (NULL);
					}
			i = i + ft_strlength(&s[i],c);
			p++;		
		}
			i++;
	}


	matrix[p] = 0;
	return (matrix);
}

// int main(void)
// {
// 	char **arrayresult;
// 	arrayresult = ft_split("    ", ' ');
// 	int i = 0;
// 	while (arrayresult[i] !='\0')
// 	{
// 		printf("%s\n", arrayresult[i]);
// 		i++;
// 	}
// 	char **arrayresult2;
// 	arrayresult2 = ft_split("12", ' ');
// 	int o = 0;
// 	while (arrayresult2[o] !='\0')
// 	{
// 		printf("%s\n", arrayresult2[o]);
// 		o++;
// 	}
// }