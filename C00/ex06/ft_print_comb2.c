#include <unistd.h>
void	ft_print_comb(void);
void	write_comb(int x, int y);

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	y = 1;

	while (x < 99)
	{
		while (y < 99)
		{
			write_comb(x, y);
			y++;
		}
		x++;
	}
}

void	write_comb(int x, int y)
{
	char a;
	char b;
	char c;
	char d;
	
	a = x / 10 + '0';
	b = x % 10 + '0';
	c = x / 10 + '0';
	d = x % 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ", ", 2);
}

int main()
{
	ft_print_comb2();
	return 0;
}
