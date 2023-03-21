/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:59:17 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/21 17:14:36 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	// if (n == 0)
	// {
	// 	return (0);
	// }
	// while (str1[i] == str2[i] && (i < n - 1)
	// 	&& str1[i])
	// 	i++;
	// return (str1[i] - str2[i]);
	while(str1[i] !='\0' && i < n -1)
	{
		if(str1[i] > str2[i])
			return(1);
		else if(str1[i] < str2[i])
			return (-1);
		i++;
	}
	return(0);
}

int	main(void)
{
	printf("%d\n", strncmp("hello", "ha", 2));
    printf("%d\n", ft_strncmp("hello", "ha", 2));
}