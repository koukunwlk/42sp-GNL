/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:09:55 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/27 15:20:10 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
char		*get_next_line(int fd);
static char	*read_file(size_t size_read, char *buffer, int fd);
static char	*ft_strjoin_and_free(char *s1, char *s2);
char		*get_current_line(char	**tmp_holder);
char		*ft_strdup(char *s);
char		*ft_strchr(char *str, char c);
size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
#endif
