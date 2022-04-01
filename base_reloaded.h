/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_reloaded.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosa-ma <git.ichmi@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 13:48:25 by frosa-ma          #+#    #+#             */
/*   Updated: 2022/03/31 19:02:46 by frosa-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FROSA_MA_BASE_RELOADED_H
# define FROSA_MA_BASE_RELOADED_H

void	ft_print_alphabet();
void	ft_print_numbers();
void	ft_print_numbers();
void	ft_is_negative(int);
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
void	ft_foreach(int *tab, int length, void (*f)(int));
int		ft_count_if(char **tab, int (*f)(char*));

#endif
