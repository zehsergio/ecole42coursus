/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 20:06:41 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/10/08 20:54:37 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

// A function that sets each byte of a memory area to zero,
// based on the size (number of bytes) passed.

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char *p; // Pointer used to walk through the memory, byte by byte.
	size_t i;

	i = 0;
	p = (char *)s; // Copy the memory address from 's' and tell the compiler to treat it as a char pointer (cast).
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}