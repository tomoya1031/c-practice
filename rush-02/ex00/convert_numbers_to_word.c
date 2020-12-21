/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_numbers_to_word.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:08:11 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:27:17 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft.h"

int		is_match_file(char *number, int counter, char *file)
{
	if (*file == ':' && number[counter] == '\0')
	{
		return (1);
	}
	return (0);
}

char	*search_file(char *number, char *file)
{
	int i;

	i = 0;
	while (*file != '\0')
	{
		if (*file == number[i])
		{
			i++;
			file++;
		}
		else
		{
			file = skip_space(file);
			if (is_match_file(number, i, file) == 1)
			{
				return (file);
			}
			else
			{
				i = 0;
				file = jump_to_next_line(file);
			}
		}
	}
	return (0);
}

char	*find_word(char *number, char *file)
{
	file = search_file(number, file);
	if (file == 0)
	{
		return (0);
	}
	file++;
	return (trim_word(file));
}

char	**convert_numbers_to_word(char **numbers, char *file)
{
	int		i;
	char	*word;

	i = 0;
	while (numbers[i] != 0)
	{
		word = find_word(numbers[i], file);
		if (word == 0)
		{
			return (0);
		}
		numbers[i] = word;
		i++;
	}
	return (numbers);
}
