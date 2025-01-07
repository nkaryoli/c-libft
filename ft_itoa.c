/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 17:49:37 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/06 20:15:08 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	nbr;
	int	digits;

	nbr = n;
	digits = 0;
	if (n == 0)
		digits = 1;
	else
	{
		if (n < 0)
		{
			nbr = -n;
			digits++;
		}
		while (nbr > 0)
		{
			digits++;
			nbr = nbr / 10;
		}
	}
	return (digits);
}

char	*digits_to_str(char *str, int nbr, int digits)
{
	int	i;

	i = digits - 1;
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	str[digits] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digits;
	int		n_abs;

	n_abs = n;
	digits = count_digits(n);
	printf("%i digitos\n", digits);
	str = (char *)malloc((digits + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n_abs = -n;
	}
	digits_to_str(str, n_abs, digits);
	return (str);
}
