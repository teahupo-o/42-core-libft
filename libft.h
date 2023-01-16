/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erut <erut@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:40:52 by erut              #+#    #+#             */
/*   Updated: 2023/01/16 13:27:41 by erut             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int a);
int	ft_isdigit(int a);
int	ft_isalnum(int a);
int	ft_isascii(int a);
int	ft_isprint(int a);
int	ft_strlen(const char *src);
void	*ft_memset(void *p, int a, size_t n);
void	ft_bzero(void *a, size_t n);
void	*ft_memcpy(void *first, const void *sec, size_t n);
size_t	ft_strlcpy(char *des, const char *src, size_t size);
void	*ft_memmove(void *str1, const void *str2, size_t n);
size_t	ft_strlcat(char *des, const char *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
int	ft_toupper(int a);
int	ft_tolower(int a);
void	*ft_calloc(size_t count, size_t size);
int	ft_atoi(char *str);


#endif