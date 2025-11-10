/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:12:34 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/10 11:22:10 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_strjoin concatenates the given strings s1 and s2
	and allocates sufficient memory for the newly created string.

	RETURN VALUE :
	A pointer to the new concatenated string.
	NULL if the memory allocation fails.
*/

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		s[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i])
	{
		s[len + i] = s2[i];
		i++;
	}
	return (s);
}
