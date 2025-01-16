/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:54:48 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/11 20:48:09 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	nl = '\n';
	if (s[0] == '\0')
		write(fd, &nl, 1);
	if (*s && fd > -1)
	{
		write(fd, s, ft_strlen(s));
		write(fd, &nl, 1);
	}
	return ;
}
