/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:11:14 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/06 10:11:18 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/* 
	ft_strnstr() Find the first substring in a length-limited string
	big:	The big string to be searched
	little:	The little string to search for
	len:	the maximum number of characters to search
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while ((big[i]) && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *) big + i);
			j++;
		}
		i++;
	}
	return (0);
}
