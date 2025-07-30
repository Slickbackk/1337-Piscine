#include<stdio.h>
#include<unistd.h>
void	ft_is_negative()
{
	char c = '9';
	while(c >= '1')
	{
		write(1,&c,1);
		c--;
	}
}
int	main()
{
	ft_is_negative();
	return 0;
}
		
