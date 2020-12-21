/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_numbers_recursive.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:12:59 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:49:25 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "./ft.h"

void	append_digits(char *str, char **numbers)
{
	int		i;
	char	*string;
	int		strlen;

	strlen = ft_strlen(str);
	string = (char *)malloc(sizeof(char) * (strlen + 1));
	while (*numbers != 0)
	{
		numbers++;
	}
	*numbers = string;
	i = 0;
	while (i < strlen)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	numbers++;
	*numbers = 0;
}

void	append_2digits(char *str, char **numbers)
{
	if (ft_strlen(str) == 1 && *str == '0')
	{
		append_digits(str, numbers);
	}
	else if (*str == '0')
	{
		str++;
		append_digits(str, numbers);
	}
	else if (*str == '1' || ft_strlen(str) == 1)
	{
		append_digits(str, numbers);
	}
	else
	{
		append_digits(create_ten_digit(*str), numbers);
		str++;
		if (*str != '0')
		{
			append_digits(str, numbers);
		}
	}
}

void	append_3digits(char *str, char **numbers)
{
	if (ft_strlen(str) < 3)
	{
		if (!(*str == '0' && str[1] == '0'))
		{
			append_2digits(str, numbers);
		}
		return ;
	}
	if (*str != '0')
	{
		append_digits(trim_str(str, 1), numbers);
		append_digits("100", numbers);
	}
	str++;
	if (!(*str == '0' && str[1] == '0'))
	{
		append_2digits(str, numbers);
	}
}

void	str_to_numbers_recursive(char *str, char **numbers)
{
	int		div;
	int		head_count;
	int		mod;
	int		strlen;
	char	*trimmed_str;

	strlen = ft_strlen(str);
	div = (strlen - 1) / 3;
	mod = strlen % 3;
	trimmed_str = (char *)malloc(sizeof(char) * 4);
	if (mod != 0)
	{
		head_count = mod;
	}
	else
	{
		head_count = 3;
	}
	trimmed_str = trim_str(str, head_count);
	append_3digits(trimmed_str, numbers);
	str = str + head_count;
	str_to_numbers_recursive_if_needed(
			str, numbers, trimmed_str, div);
}
