/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 05:22:54 by shovsepy          #+#    #+#             */
/*   Updated: 2021/02/14 05:22:56 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_get_line_size(char *s);
char	*ft_clearmemory(char *memory);
char	*ft_new_line(char *s);

#endif
