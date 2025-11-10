/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:53:44 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/10 10:04:39 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

// DESCRIPTION
//  The strdup() function allocates sufficient memory for a 
// 	copy of the string s1, does the copy, and returns a pointer to it. 
// 	The pointer may subsequently be used as an argument to the function free(3).

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
