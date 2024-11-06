/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:43:33 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/05 21:37:05 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_is_in_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	count_sets(char const *src, char const *set)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (char_is_in_set(src[i], set))
	{
		i++;
		count++;
	}
	i = ft_strlen(src) - 1;
	while (char_is_in_set(src[i], set))
	{
		i--;
		count++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*trimmed;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (char_is_in_set(s1[i], set))
		i++;
	while (char_is_in_set(s1[j], set))
		j--;
	len = ft_strlen(s1) - i - count_sets(s1, set) + i;
	trimmed = ft_substr(s1, i, len);
	return (trimmed);
}
/*
#include <stdio.h>

int	main(void)
{
	const char str[] = "zazaaaaazazaazsalut  mecazzzzzzaaazazaz";
	const char set[] = "zaz";
	printf("%s", ft_strtrim(str, set));
	return(0);
}
*/
