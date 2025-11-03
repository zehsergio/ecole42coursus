#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	//	============== isalpha =================
	printf("\n---- isalpha ----\n");
	printf("5 isalpha : %d, real : %d\n", ft_isalpha('5'), isalpha('5'));
	printf("p isalpha : %d, real : %d\n", ft_isalpha('p'), isalpha('p'));
	printf("O isalpha : %d, real : %d\n", ft_isalpha('O'), isalpha('O'));
}