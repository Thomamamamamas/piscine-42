#include <unistd.h>
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	while (a <= 98)
	{
		b = 1;
		while (b <= 99)
		{
			if( a != b)
			{
				ft_putnbr(a);
				write(1, " ", 1);
				ft_putnbr(b);
				write(1, ", ", 2);
				b++;
			}
		}
		a++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_print_comb2();
	return 0;
}
