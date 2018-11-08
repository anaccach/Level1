void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b);

int		main(int ac, char **av)
{
	int a;
	int b;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		printf("a before : " "%d\n", a);
		printf("b before : " "%d\n", b);
		ft_swap(&a, &b);
		printf("a after swap : " "%d\n", a);
		printf("b after swap : " "%d\n", b);
	}
	return (0);
}
