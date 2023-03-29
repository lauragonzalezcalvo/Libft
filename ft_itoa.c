/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:13:17 by laurgonz          #+#    #+#             */
/*   Updated: 2023/03/29 20:02:10 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_extra( int n)
{
	int	len;
	int	temp;

	len = 0;
	temp = n;
	while (temp != 0)
	{
		len++;
		temp = temp / 10;
	}
	if (n < 0 || n == 0)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_extra(n);
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (len-- >= 0)
	{
		if (str[len] != '-')
		{
			str[len] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}
/*int main (void)
{
     int num = -123;
    char *str = ft_itoa(num);

    printf("El número %d convertido a una cadena es: %s\n", num, str);
  int num2 = -2147483648;
    char *str2 = ft_itoa(num2);

    printf("El número %d convertido a una cadena es: %s\n", num2, str2);
   
    return 0;
}*/
