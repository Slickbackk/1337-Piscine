#include<unistd.h>
void ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		char l = str[i];
		write(1,&l,1);
		i++;
	}
	
}
int	main()
{
	char str[] = "hello world";
	ft_putstr(str);
	return 0;
}
