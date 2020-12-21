/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_0_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:09:11 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:09:27 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*create_0_digit(int count)
{
	char	*digit;
	int		i;

	digit = (char *)malloc(sizeof(char) * (count + 2));
	i = 0;
	digit[0] = '1';
	while (i < count)
	{
		digit[i + 1] = '0';
		i++;
	}
	digit[i + 1] = '\0';
	return (digit);
}
