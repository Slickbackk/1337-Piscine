#include<stdio.h>
#include<unistd.h>
void ft_is_negative(int n)
{
	char c;
	if (n < 0)
	{
		c = 'N';
	}
	else
	{
		c = 'P';
		
	}
	write(1, &c, 1);
}
int	main()
{
	ft_is_negative(-3);
	return 0;
}
