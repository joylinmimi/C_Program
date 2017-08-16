void	ft_putchar(char c);

void	middle(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	firstlast(int ix, int x)
{
	if (ix == 1 || ix == x)
		ft_putchar('o');
	else
		ft_putchar('-');
}

void	rush(int x, int y)
{
	int ix;
	int iy;

	iy = 1;
	while (iy <= y)
	{
		ix = 1;
		while (ix <= x)
		{
			if (iy == 1 || iy == y)
				firstlast(ix, x);
			else
				middle(ix, x);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
