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

char *ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(((ft_strlen(s1) +1) * sizeof(char)));
	if(str == NULL)
		return(NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", strdup("pepino"));
	printf("%s\n", ft_strdup("pepino"));
}*/
