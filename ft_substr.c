/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:59:29 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/23 16:28:31 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	
	str = (char *)malloc(sizeof(char) * 3);
	while (i <= len)
	{
		i++;
	}

}

int	main(void)
{
	printf("%d", ft_substr("abcdef", -3, 1));
}
