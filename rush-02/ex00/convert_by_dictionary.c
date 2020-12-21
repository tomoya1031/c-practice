/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_by_dictionary.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hida <hida@student.42tokyo.jp>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:58:26 by hida              #+#    #+#             */
/*   Updated: 2020/09/27 17:32:12 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./ft.h"

char	*convert_array(char **pre_res)
{
	int		i;
	int		j;
	int		n;
	char	*result;

	result = (char *)malloc(sizeof(pre_res) + 1);
	i = 0;
	n = 0;
	while (pre_res[i] != 0)
	{
		j = 0;
		while (pre_res[i][j] != '\0')
		{
			result[n] = pre_res[i][j];
			j++;
			n++;
		}
		result[n] = ' ';
		n++;
		i++;
	}
	result[n - 1] = '\0';
	return (result);
}

char	*convert_by_dictionary(char *dic, char *str)
{
	int		file_size;
	char	*file_str;
	char	**nbrs;
	char	**pre_res;
	char	*result;

	nbrs = str_to_numbers(str);
	file_size = readsize(dic);
	if (file_size == 0)
	{
		return (DICTERROR);
	}
	file_str = readfile(dic, file_size);
	pre_res = convert_numbers_to_word(nbrs, file_str);
	if (pre_res == 0)
	{
		return (DICTERROR);
	}
	result = convert_array(pre_res);
	free(file_str);
	return (result);
}
