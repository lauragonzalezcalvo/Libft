/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:31:37 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/16 17:31:44 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
    char *dst = (char*)dest;
    const char *s = (const char*)src;
    size_t i;

    i = 0;
    if (dst < s) {
        while( i < n) {
            i++;
            dst[i] = s[i];
        }
    } else {
        i = n;
        while( i > 0) {
            i--;
            dst[i-1] = s[i-1];
        }
    }
    return dest;
}

/*
int main(void)
{
    char a[7] = "abcdefg";
    char b[6] = "abcdef";

    printf("%s\n",  memmove( b, a, 5 ));
    printf("%s\n",  ft_memmove( b, a, 5 ));
}*/
