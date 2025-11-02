/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:47:11 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/10/08 18:03:19 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

// The memset() function writes len bytes of value c 
// (converted to an unsigned char)to the string b.

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*p;

	p = dest;
	while (len-- > 0)
		*p++ = (unsigned char)c;
	return (dest);
}
