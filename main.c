#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	//	============== isalpha =================
	printf("\n---- ft_isalpha vs isalpha ----\n\n");
	printf("'5' → ft: %d | real: %d\n", ft_isalpha('5'), isalpha('5'));
	printf("'p' → ft: %d | real: %d\n", ft_isalpha('p'), isalpha('p'));
	printf("'O' → ft: %d | real: %d\n", ft_isalpha('O'), isalpha('O'));
	printf("'?' → ft: %d | real: %d\n", ft_isalpha('?'), isalpha('?'));
	printf("'Z' → ft: %d | real: %d\n", ft_isalpha('Z'), isalpha('Z'));
	printf("'a' → ft: %d | real: %d\n", ft_isalpha('a'), isalpha('a'));
	return (0);
}
