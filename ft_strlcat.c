/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:41:14 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/10 10:41:14 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

/*
	DESCRIPTION :
	The function ft_strlcat appends the given string src to the end of 
	dst. It will append at most dstsize - ft_strlen(dst) - 1 and 
	nul-terminate the result.

	Note : space for the terminating \0 character must be included in dstsize.

	RETURN VALUE :
	The total length of the string that it tried to create : the initial
	length of dst + the length of src, with the goal to facilitate
	truncaction detection.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;
	size_t	sum;

	i = 0;
	sum = 0;
	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size > dest_len)
		sum = dest_len + src_len;
	else
		return (src_len + size);
	while (src[i] && (dest_len + 1) < size)
		dst[dest_len++] = src[i++];
	dst[dest_len] = '\0';
	return (sum);
}
