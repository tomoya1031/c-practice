/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:12:47 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:26:10 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./ft.h"

char	**str_to_numbers(char *str)
{
	char **numbers;

	numbers = (char **)malloc(sizeof(char *) * 100);
	numbers[0] = 0;
	if (*str == '0')
	{
		numbers[0] = "0";
		return (numbers);
	}
	else
	{
		str_to_numbers_recursive(str, numbers);
	}
	return (numbers);
}
