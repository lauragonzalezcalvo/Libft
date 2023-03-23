/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:27:21 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/23 13:46:20 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Devuelve  un  puntero  a  una  nueva cadena de caracteres que es un
duplicado de la cadena apuntada por s.La  memoria  para  la  nueva  cadena  se  obtiene
 automáticamente con malloc(3), y puede (y debe) liberarse con free(3)*/

#include"libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


char *ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	char	*strcpy;

	i = 0;
	str = (char *)malloc(sizeof(s1));
	strcpy = ft_strcpy(str, (char *)s1);
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", strdup("pepino"));
	printf("%s\n", ft_strdup("pepino"));
}*/
