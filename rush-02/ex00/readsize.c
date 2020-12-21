/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readsize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:25:15 by hida              #+#    #+#             */
/*   Updated: 2020/09/27 17:31:40 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	readsize(char *dic)
{
	char	buf[100];
	int		fd;
	int		i;
	int		read_size;

	i = 0;
	fd = open(dic, O_RDWR);
	if (fd == -1)
		return (0);
	while (1)
	{
		read_size = read(fd, buf, sizeof(buf));
		i += read_size;
		if (read_size == 0)
			break ;
	}
	close(fd);
	return (i);
}
