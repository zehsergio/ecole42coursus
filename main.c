#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	// isalpha
	printf("\n---- ft_isalpha vs isalpha ----\n\n");
	printf("'5' → ft: %d | real: %d\n", ft_isalpha('5'), isalpha('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isalpha('p'), isalpha('p'));
	printf("'O' → ft: %d | real: %d\n", ft_isalpha('O'), isalpha('O'));
	printf("'?' → ft: %d | real: %d\n", ft_isalpha('?'), isalpha('?'));
	printf("'Z' → ft: %d | real: %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("'a' → ft: %d | real: %d\n", ft_isalpha('a'), isalpha('a'));

	// isdigit
	printf("\n---- ft_isdigit vs isdigit ----\n");
	printf("'5' → ft: %d | real: %d\n", ft_isdigit('5'), isdigit('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isdigit('p'), isdigit('p'));
	printf("'0' → ft: %d | real: %d\n", ft_isdigit('0'), isdigit('0'));
	printf("'?' → ft: %d | real: %d\n", ft_isdigit('?'), isdigit('?'));
	printf("'9' → ft: %d | real: %d\n", ft_isdigit('Z'), isdigit('Z'));

	// isalnum
	printf("\n---- ft_isalnum vs isalnum ----\n");
	printf("'5' → ft: %d | real: %d\n", ft_isalnum('5'), isalnum('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isalnum('p'), isalnum('p'));
	printf("'D' → ft: %d | real: %d\n", ft_isalnum('D'), isalnum('D'));
	printf("'?' → ft: %d | real: %d\n", ft_isalnum('?'), isalnum('?'));
}
