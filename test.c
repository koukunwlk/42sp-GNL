/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaro-d <mamaro-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:40:54 by mamaro-d          #+#    #+#             */
/*   Updated: 2021/09/23 17:43:19 by mamaro-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

int	main(void)
{
	static char	*keep = NULL;

	keep = malloc(1);
	printf("%s", keep);
	free(keep);
}
