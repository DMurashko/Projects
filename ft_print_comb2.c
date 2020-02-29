#include <unistd.h>

void	ft_print_comb(void) 
{
	int i;
	int j;
	
	i = -1;
	while (++i < 100)
	{
		j = -1;
		while (++j < 100)
		{
			printf("%d %d, ", i, j);
		} 
	}
}


int	main(void)
{
	ft_print_comb();
	return (0);
}
