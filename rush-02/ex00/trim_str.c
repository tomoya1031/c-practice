/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:14:13 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:30:36 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*trim_str(char *str, int count)
{
	int		i;
	char	*trimmed_str;

	trimmed_str = (char *)malloc(sizeof(char) * (count + 2));
	i = 0;
	while (i < count)
	{
		trimmed_str[i] = str[i];
		i++;
	}
	return (trimmed_str);
}
