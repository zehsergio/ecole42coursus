/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-ju <jdias-ju@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 20:25:25 by jdias-ju          #+#    #+#             */
/*   Updated: 2025/11/11 10:56:31 by jdias-ju         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*word_splitter(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!words)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[j] = word_splitter(&s[i], c);
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		else
			i++;
	}
	words[j] = 0;
	return (words);
}

int main(void)
{
    const char *str = "  hello world 42 school  ";
    char sep = ' ';
    char **v = ft_split(str, sep);

    printf("Input: \"%s\"\nSep  : '%c'\n\n", str, sep);

    if (!v) {
        puts("ft_split returned NULL");
        return 1;
    }

    // Mostra resultado e endereços (útil para debug de ponteiros)
    for (int i = 0; v[i]; i++) {
        printf("v[%d] @ %p -> \"%s\"\n", i, (void*)v[i], v[i]);
    }

    // Libera tudo
    for (int i = 0; v[i]; i++) free(v[i]);
    free(v);
    return 0;
}