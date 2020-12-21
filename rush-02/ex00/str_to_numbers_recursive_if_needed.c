/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_numbers_recursive_if_needed.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:44:04 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:50:43 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft.h"

void	str_to_numbers_recursive_if_needed(char *str, char **numbers,
		char *trimmed_str, int div)
{
	if (div > 0)
	{
		if (trimmed_str[0] != '0' || trimmed_str[1] != '0'
				|| trimmed_str[2] != '0')
		{
			append_digits(create_0_digit(div * 3), numbers);
		}
		str_to_numbers_recursive(str, numbers);
	}
}
