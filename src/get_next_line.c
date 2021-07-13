/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 05:22:17 by shovsepy          #+#    #+#             */
/*   Updated: 2021/02/14 05:22:30 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*ft_get_line(char *save)
{
	char	*new_line;
	int		i;

	i = 0;
	while (save && save[i] != '\0' && save[i] != '\n')
		i++;
	new_line = malloc((i + 1));
	if (!new_line)
		return (NULL);
	i = 0;
	while (save && save[i] != '\0' && save[i] != '\n')
	{
		new_line[i] = save[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

char	*ft_clearmemory(char *memory)
{
	char	*temp;
	int		len;
	int		i;
	int		j;

	i = 0;
	if (!memory)
		return (NULL);
	while (memory[i] != '\0' && memory[i] != '\n')
		i++;
	if (memory[i] == '\0')
	{
		free(memory);
		return (NULL);
	}
	len = ft_strlen(memory) - i;
	if (!(temp = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i++;
	j = 0;
	while (memory[i] != '\0')
		temp[j++] = memory[i++];
	temp[j] = '\0';
	free(memory);
	return (temp);
}

int	get_next_line(int fd, char **line)
{
	int				r;
	char			*buffer;
	static char		*save;

	if (fd < 0 || !line || BUFFER_SIZE <= 0)
		return (-1);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (-1);
	r = read(fd, buffer, BUFFER_SIZE);
	while (r > 0)
	{
		buffer[r] = '\0';
		save = ft_strjoin(save, buffer);
		if (ft_strchr(save, '\n') || ft_strchr(save, '\0'))
			break ;
	}
	free(buffer);
	if (r < 0)
		return (-1);
	*line = ft_get_line(save);
	save = ft_clearmemory(save);
	if (r == 0 && !save)
		return (0);
	return (1);
}
