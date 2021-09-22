/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 15:58:23 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/22 18:26:56 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, const char *s2)
{
	size_t	size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, s1, size);
	ft_strlcat(str, s2, size);
	return (str);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		len_dest;
	size_t		res;
	size_t		len_src;
	size_t		i;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	res = 0;
	i = 0;
	if (n > len_dest)
		res = len_src + len_dest;
	else
		res = len_src + n;
	while (src[i] && (len_dest + 1) < n)
	{
		dest[len_dest] = src[i];
		len_dest++;
		i++;
	}
	dest[len_dest] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len > start)
	{
		i = 0;
		while (s[i + start] && i < len)
			i++;
		len = i;
	}
	else
		return (ft_strdup(""));
	ptr = (char *)malloc((len + 1) * sizeof(char));
	ptr[len + 1] = '\0';
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	if (n == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
