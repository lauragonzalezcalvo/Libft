/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:40:41 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/29 11:21:06 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*need;
	size_t	i;
	size_t	j;

	str = (char *)haystack;
	need = (char *)needle;
	i = 0;
	if (need[0] == '\0')
		return (str);
	while (str[i] != '\0' && i <= len - 1)
	{
		j = 0;
		while (str[i + j] == need[j] && i + j < len && need[j] != '\0')
			j++;
		if (need[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str1[] = "Esto es una cadena";
	char str2[] = "es";
	char str3[] = "Esto es una cadena";
	char str4[] = "es";
	printf("%s\n", strnstr(str1, str2, 9));
	printf("%s\n", ft_strnstr(str3, str4, 9));
}*/
