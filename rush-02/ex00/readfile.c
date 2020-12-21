/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 15:25:15 by hida              #+#    #+#             */
/*   Updated: 2020/09/27 17:33:25 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char	*readfile(char *dic, int size)
{
	int		fd;
	char	*buf;
	int		read_size;

	buf = (char *)malloc(sizeof(char) * (size + 1));
	fd = open(dic, O_RDWR);
	if (fd == -1)
		return (0);
	read_size = read(fd, buf, size);
	close(fd);
	buf[size] = '\0';
	return (buf);
}
