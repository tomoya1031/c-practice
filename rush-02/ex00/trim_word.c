/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:14:24 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:27:58 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*trim_word(char *file)
{
	int		i;
	char	*word;
	int		word_count;

	word_count = 0;
	while (*file == ' ')
	{
		file++;
	}
	while (file[word_count] != '\n')
	{
		word_count++;
	}
	word = (char *)malloc(sizeof(char) * (word_count + 1));
	i = 0;
	while (i < word_count)
	{
		word[i] = file[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
