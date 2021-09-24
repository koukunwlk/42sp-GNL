/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:58:04 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/24 15:17:24 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <string.h>
char	*get_next_line(int fd)
{
	static char	*keep = NULL;
	char		*buffer;
	char		*line;
	size_t		size_read;

	if(fd < 0)
		return(NULL);
	line = ft_strdup("");
	buffer = (char *)calloc(sizeof(char), BUFFER_SIZE + 1);
	keep = ft_strdup("");
	size_read = read_file(&keep, &buffer, &line, fd);
	if (!size_read)
	{	
		free(keep);
		return (ft_strdup(""));
	}
	free(keep);
	return (line);
}

size_t	read_file(char **keep, char **buffer, char **line, int fd)
{
	char	*tmp_keep;
	size_t	result;

	result = 1;
	while (!ft_strchr(*keep, '\n') && result)
	{
		result = read(fd, *buffer, BUFFER_SIZE);
		(*buffer)[result] = '\0';
		tmp_keep = *keep;
		*keep = ft_strjoin(tmp_keep, *buffer);
		free(tmp_keep);
	}
	free(*line);
	*line = split_keep(keep);
	free((*buffer));
	return(result);
}

char	*split_keep(char **keep)
{
	size_t	i;
	char	*keep_cpy;
	char	*tmp_keep;

	i = 0;
	while ((*keep)[i] != '\0')
	{
		if ((*keep)[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	tmp_keep = *keep;
	keep_cpy = ft_substr(tmp_keep, 0, i);
	*keep = ft_strdup(&(*keep)[i]);
	free(tmp_keep);
	return (keep_cpy);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = (char *)calloc(sizeof(char), len);
	if (ptr == NULL)
		return (NULL);
	while(len--)
		ptr[len] = s[len];
	return (ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
