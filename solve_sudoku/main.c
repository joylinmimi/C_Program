#include "header.h"

int		main(int argc, char **argv)
{
	int **tab;
	int **tab_rev;

	tab = alloc_tab();
	tab_rev = alloc_tab();
	if (argc != 10)
		return (throw_error());
	if (!populate_tab(tab, argc, argv))
		return (0);
	populate_tab(tab_rev, argc, argv);
	find_solution(tab, 0, 0, 0);
	find_solution(tab_rev, 0, 0, 1);
	if (compare_solution(tab, tab_rev))
		print_tab(tab);
	else
		ft_putstr("Error\n");
	free_tab(tab);
	free_tab(tab_rev);
	return (0);
}