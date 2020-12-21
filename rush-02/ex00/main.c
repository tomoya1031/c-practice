/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:11:57 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:12:04 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft.h"

int	main(int ac, char **argv)
{
	char *output_string;

	if (ac == 2 && *(argv[1]) != '\0' && is_valid_arg(argv[1]) == 1)
	{
		output_string = convert_by_dictionary("numbers.dict", argv[1]);
	}
	else if (ac == 3 && *(argv[2]) != '\0' && is_valid_arg(argv[2]) == 1)
	{
		output_string = convert_by_dictionary(argv[1], argv[2]);
	}
	else
	{
		output_string = ERROR;
	}
	ft_putstr(output_string);
}
