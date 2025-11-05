/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:40:38 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/05 11:43:38 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_atoi converts a string into an int.

	RETURN VALUE :
	The converted int.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	isneg;
	int	i;

	sum = 0;
	isneg = 1;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (sum * isneg);
}
