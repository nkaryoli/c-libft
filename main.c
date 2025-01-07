/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:37:17 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/07 20:15:05 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		c1;
	int		c2;
	int		fd;
	char	nl;
	char	c;

	c1 = 98;
	c2 = 66;
	fd = 1;
	nl = '\n';
	c1 = ft_toupper(c1);
	c = c1;
	ft_putchar_fd(c, fd);
	ft_putchar_fd(nl, fd);
	c2 = ft_tolower(c2);
	c = c2;
	write(1, &c, 1);
	ft_putchar_fd(c,fd);
	return (0);
}
