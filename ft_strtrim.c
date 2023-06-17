/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:20:36 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/05 17:26:35 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	set_len;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i ++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j --;
	set_len = (j + 1) - i;
	return (ft_substr(s1, i, set_len));
}
/*
int	main(void)

{
	printf("Soy strtrim. \t: %s", ft_strtrim("  \t \t \n   \n\n\n\t", ""));
	printf("Soy strtrim. space: %s", ft_strtrim("   ", ""));
}*/
