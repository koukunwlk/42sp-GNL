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
#include "get_next_line.h"
char *get_next_line(int fd);
int	main(void)
{
	int		file = open("test.txt", O_RDONLY);
	
	get_next_line(file);
	close(file);
}
char *get_next_line(int fd)
{
	static char holder = '\0';
	char		*str;
	int			size;
	int			i;
	i = 0;
	size = read(fd, str, 100);
	str[size] = '\0';
	/* while(str[i] != '\n' || str[i] != '\0')
		i++; */
	printf("\\n em : %s", str);	
}