/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:58:32 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/22 18:34:29 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	read_file(char **keep, char **buffer, char **line, int fd);
char	*split_keep(char **keep);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_strlen(const char *str);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
#endif
