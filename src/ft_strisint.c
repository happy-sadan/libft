/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trcottam <trcottam@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:03:26 by trcottam          #+#    #+#             */
/*   Updated: 2021/08/09 15:27:05 by trcottam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strisint(char *str)
{
	bool	neg;

	if (*str == '-')
		neg = true;
	if (ft_strchr("-+", *str))
		str++;
	while (*str == '0')
		str++;
	if (ft_strcmp(str, ft_itoa(ft_atoi(str)))
			&& !(!ft_strcmp(str, "2147483648") && neg))
		return (false);
	while (ft_isdigit(*str))
		str++;
	return (!*str);
}
