#include <stdio.h>
#include <unistd.h>

int	ft_putchar(int c)
{
	/*int count;

	count = 0;
	write (1, &c, 1)
	return (count);*/
	write (1, &c, 1);
	return (1);
}
/*int	main()
{
	char	a;

	a = 'X';
	printf("El número de caracteres es %d", ft_putchar(a));           
	return (0);
}*/
int ft_putstr(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (!str)
		return(ft_putstr("(null)"));
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		//write (1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}
int	main()
{
	char str[] = "holatus";
	int	i;
	int	count;

	count = ft_putstr(str);	
	printf("El número de caracteres contados en ft_putstr es %d", ft_putstr(str));
	/*while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
		count++;	
	}*/
	printf("El número de caracteres es %d", count);
	return (0);
}