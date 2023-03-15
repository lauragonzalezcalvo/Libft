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

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t x;
    char *src1;


    src1 = (char *)src;
    x = ft_strlen(src1);
    i = 0;
    if (dstsize != 0)
    {
        while (src1[i] != '\0' && i < dstsize - 1)
        {
            dst[i] = src1[i];
            i++;
        }
        dst[i] = '\0';
    }
    return (x);
}

#include<string.h>
int main(void)
{
    char a[4] = "holi";
    char b[5] = "holis";
    printf("%zu", ft_strlcpy(a, b, 4));
    //printf("%zu", strlcpy(a, b, 4));
    return(0);
}