#include<unistd.h>
#include<stdio.h>
void ft_print_numbers()
{
	char c = '1';
	while(c <= '9')
	{
		write(1,&c,1);
		c++;
	}
}
int	main()
{
	ft_print_numbers();
	return 0;
}
