/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:58:04 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/20 19:37:40 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"
char *get_next_line(int fd);
int	main(void)
{
	int		file = open("test.txt", O_RDONLY);
	char	*next_line;
	next_line = get_next_line(file);
	printf("%s", next_line);
	next_line = get_next_line(file);
	printf("%s", next_line);
	close(file);
}
char *get_next_line(int fd)
{
	char		*str;
	static char	*holder = NULL;
	int			size;
	int			i;
	i = 0;
	holder = (char *)malloc(sizeof(char) * 100);
	size = read(fd, holder, 100);
	holder[size] = '\0';
	while (holder[i] != '\n' && i < size)
		i++;
	i++;
	str = (char *)malloc(sizeof(char) * i);
	strncpy(str, holder, i);
	holder += i;
	printf("size = %i\n i = %i\n", size, i);
	return (str);
}