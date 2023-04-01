/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laurgonz <laurgonz@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 14:30:05 by laurgonz          #+#    #+#             */
/*   Updated: 2023/04/01 14:42:57 by laurgonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int nb, int fd)
{
	write(fd, &nb, 1);
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48, fd);
	}
}
int	main(void)
{
	ft_putnbr_fd(5, 2);
}
