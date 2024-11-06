/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nopareti <nopareti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 21:31:18 by nopareti          #+#    #+#             */
/*   Updated: 2024/11/06 13:39:48 by nopareti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strlen(const char *s);
void    *ft_calloc(size_t count, size_t size);
char    *ft_strdup(const char *s);
int ft_atoi(const char* nptr);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strjoin(char const *s1, char const *s2);
char **ft_split(const char *s, char c);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
