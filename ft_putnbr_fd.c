/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:09:31 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/16 13:52:40 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	negative_nbr(int n, int fd)
{
	write(fd, "-", 1);
	if (n == -2147483648)
		write(fd, "2147483648", 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	temp[20];
	int		i;

	i = 0;
	if (n < 0)
	{
		negative_nbr(n, fd);
		n = -n;
	}
	if (n == 0)
		write(fd, "0", 1);
	while (n > 0)
	{
		temp[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		write(fd, &temp[i], 1);
	}
}
