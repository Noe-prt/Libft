/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:26:46 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/06 11:39:35 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
#include <fcntl.h>

int     main(void)
{
        int     fd;

        fd = open("test.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
        ft_putstr_fd("Hello, World!", fd);
        return (0);
}
*/
