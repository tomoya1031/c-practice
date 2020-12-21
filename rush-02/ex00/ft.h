/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoshita <kyoshita@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:28:15 by kyoshita          #+#    #+#             */
/*   Updated: 2020/09/27 17:48:54 by kyoshita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define ERROR "Error"
# define DICTERROR "DictError"

char	**str_to_numbers(char *str);
int		ft_strlen(char *str);
char	*trim_str(char *str, int count);
char	*create_ten_digit(char ten_digit_num);
char	*create_0_digit(int count);
int		ft_strlen(char *str);
void	str_to_numbers_recursive(char *str, char **numbers);
int		is_valid_arg(char *str);
void	ft_putstr(char *str);
char	**convert_numbers_to_word(char **numbers, char *file);
int		readsize (char *dic);
char	*readfile (char *dic, int size);
char	*convert_by_dictionary(char *dic, char *str);
char	*trim_word(char *file);
char	*jump_to_next_line(char *file);
char	*skip_space(char *file);
void	str_to_numbers_recursive_if_needed(
		char *str, char **numbers, char *trimmed_str, int div);
void	append_digits(char *str, char **numbers);
#endif
