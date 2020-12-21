/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_ten_digit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:10:30 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:10:36 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*create_ten_digit(char ten_digit_num)
{
	char *digit;

	digit = (char *)malloc(sizeof(char) * 3);
	digit[0] = ten_digit_num;
	digit[1] = '0';
	return (digit);
}
