/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:32:43 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/21 17:01:28 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont] != '\0')
		cont++;
	return (cont);
}

char *ft_strrchr(const char *s, int c)
{
	char	charcpy;
	int		len;
	char	*ss;

	ss = (char *)s;
	len = ft_strlen(s);
	charcpy = (char) c;
	while (len >= 0)
	{
		if (s[len] == charcpy)
			return (&ss[len]);
		len--;
	}
	return (NULL);	
}

/*
int	main(void)
{
	printf("%s\n", strrchr("hello", 'e'));
    printf("%s\n", ft_strrchr("hello", 'e'));
}*/
