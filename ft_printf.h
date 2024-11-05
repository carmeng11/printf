/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cagomez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:01:57 by cagomez-          #+#    #+#             */
/*   Updated: 2024/11/05 18:02:00 by cagomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_printf_c(int c);
int	ft_printf_d_i(int c);
int	ft_printf_s(char *str);
int	ft_printf_u(unsigned int);
int	ft_printf_x(unsigned int);
int	ft_printf_x_big(unsigned int);
int	ft_printf_p(size_t c);

#endif
