/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:04:51 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/13 16:05:04 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t  strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    unsigned    int i;
    unsigned    int x;

    x = ft_strlen(src);
    i = 0;
    if (dstsize != 0)
    {
        
    }
}

int main(void)
{

    return(0);
}