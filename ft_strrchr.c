/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:32:43 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/21 16:32:31 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*
char *strrchr(const char *s, int c)
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
}*/

char *ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;
	char	*letter;

	str = (char *)s;
	letter = (char )c;
	len = ft_strlen(s);
	while(len >= 0)
	{
		if (str[len] == letter)
			return (str[len]);
		len--;
	}
	return (0);
}

int	main(void)
{
	printf("%s\n", strrchr("hello", 'h'));
    printf("%s\n", ft_strrch("hello", 'h'));
}
