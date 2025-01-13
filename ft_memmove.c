/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:18:55 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/06 12:21:47 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*c_dest;
	unsigned char	*c_src;

	i = -1;
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if (!dest || !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			c_dest[n] = c_src[n];
	}
	else
	{
		while (i++ < n)
			c_dest[i] = c_src[i];
	}
	return (dest);
}
