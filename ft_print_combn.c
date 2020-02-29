#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, (char*)&a, 1);
}

void	ft_print_combn(int n) 
{
	char i;
	char j;
	char k;
	char h;
	char a;
	
	i = -1;
	while (++i < (11-n))
	{
		if (n < 2)
		{
		ft_putchar(i + '0');
		ft_putchar(',');
		ft_putchar(' ');
		}
		else 
		{
		j = -1;
		while (++j < 10)
		{
			if (n < 3)
			{
			if (i != j && -1 < i && i < j) 
			{
			ft_putchar(i + '0');
			ft_putchar(j + '0');
			ft_putchar(',');
			ft_putchar(' ');
			}
			}
			else
			{
			k = -1;
			while (++k < 10)
			{
				if (n < 4)
				{
				if (i != j && j != k && -1 < i && i < j && j < k) 
				{
				ft_putchar(i + '0');
				ft_putchar(j + '0');
				ft_putchar(k + '0');
				ft_putchar(',');
				ft_putchar(' ');
				}
				}
				else
				{
				h = -1;
				while (++h < 10)
				{
				if (i != j && j != k  && k != h && -1 < i && i < j && j < k && k < h) 
					{
					ft_putchar(i + '0');
					ft_putchar(j + '0');
					ft_putchar(k + '0');
					ft_putchar(h + '0');
					ft_putchar(',');
					ft_putchar(' ');
					}
				}
				}
			}
			}
		}
		}
	}
}


int	main(void)
{
	ft_print_combn(4);
	return (0);
}
