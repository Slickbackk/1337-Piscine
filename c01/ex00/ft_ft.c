#include<stdio.h>
#include<unistd.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int	main()
{
	int n = 0;
	ft_ft(&n);
	printf("%d\n",n);
	return 0;
}
