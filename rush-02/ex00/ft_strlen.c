/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:11:12 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:11:20 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return (count);
}
