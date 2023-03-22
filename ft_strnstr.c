/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:40:41 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/22 19:34:56 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str;
	char	*str2;
	size_t	i;
	
	str = (char *)haystack;
	need = (char *)needle;
	i = 0;
	while (str1[i] != '\0'
	{
		if (str1[i] == str2[i])
			return (char *)len;
		i++;
	}
	return (0);
}
int	main(void)
{
	char str1[] = "Esto es una cadena";
	char str2[] = "es";
	printf("%s\n", strnstr(str1, str2, 1));
	printf("%s\n", ft_strnstr(str1, str2, 1));

}

