/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42perpignan.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:17:48 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/06 11:24:04 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
/*
#include <stdio.h>

int	main(void)
{
	char* str;

	str = ft_calloc(5, sizeof(char));
	if (str == NULL)
	{
		printf("Allocation failed!");
		return (0);
	}
	else
		printf("memory was allocated successfully\n");
	for (int i = 0; i < 5; i++)
	{
		str[i] = 'c';
	}
	printf("%s", str);
	return (0);
}
*/
