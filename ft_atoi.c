/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:34:02 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 15:25:49 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_atoi(const char *str)
{
	char	*a;
	int	i;
	int	n;
	int	number;

	a = (char *)str;
	i = 0;
	n = 1;
	number = 0;
	while ((a[i] >= 9 && a[i] <= 23) || a[i] == ' ' || str[i] == '+')
		i++;
	if (a[i] == '-')
			n = -1;
	i++;
	while (a[i] >= '0' && a[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	return (number * n);
}

int	main(void)
{
	printf("%d\n", atoi("++47"));
	printf("%d\n", ft_atoi("++47"));	
}
