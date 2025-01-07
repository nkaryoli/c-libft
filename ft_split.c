/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieves- <knieves-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 20:17:25 by knieves-          #+#    #+#             */
/*   Updated: 2025/01/07 16:40:36 by knieves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_substr(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	*save(char **result, const char *start, const char *end, size_t *i)
{
	size_t	j;

	j = 0;
	if (end > start)
	{
		result[*i] = (char *)malloc((end - start + 1) * sizeof(char));
		if (!result[*i])
			return (NULL);
		while (start < end)
			result[*i][j++] = *start++;
		result[*i][j] = '\0';
		(*i)++;
	}
	return (result[*i]);
}

char	**ft_split(const char *s, char c)
{
	char			**result;
	const char		*start;
	size_t			count;
	size_t			i;

	i = 0;
	if (!s)
		return (NULL);
	count = count_substr(s, c);
	printf("cantidad de substr encontradas %zu\n", count);
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		save(result, start, s, &i);
	}
	result[count] = NULL;
	return (result);
}
