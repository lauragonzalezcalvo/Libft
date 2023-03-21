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

#include <string.h>

void	reverse_copy(char *d, const char *s, size_t len)
{
	while (len > 0)
	{
		d[len - 1] = s[len - 1];
		len--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst <= src)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		reverse_copy(d, s, len);
	}
	return (dst);
}
/*
#include <stdio.h>
int main(void)
{
    char a[7] = "abcdefg";
    char b[6] = "abcdef";

    printf("%s\n",  memmove( b, a, 5 ));
    printf("%s\n",  ft_memmove( b, a, 5 ));
}*/
