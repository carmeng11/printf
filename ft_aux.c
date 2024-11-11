

int	ft_putchar(int c)
{
	/*int count;

	count = 0;
	write (1, &c, 1)
	return (count);*/
	write (1, &c, 1)
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

	i = 0;
	count = 0;	
	printf("El número de caracteres contados en ft_putstr es %d", ft_putstr(str));
	/*while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
		count++;	
	}*/
	printf("El número de caracteres contados en ft_putchar es %d", count);
	return (0);
}


int ft_puthex(unsigned long long n, int bol)
{
	char	min;
	char	may;
	int		count;

	count = 0;
	min = "0123456789abcdef"[n % 16];
	may = "0123456789ABCDEF"[n % 16];
	if (n >= 16)
		count += ft_puthex(n / 16, bol);
	if (!bol)
		count += ft_putchar(min);
	else
		count += ft_putchar(may);
	return (count);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		x = (n % 10) + '0';
		write(1, &x, 1);
	}
	else
	{
		x = n + '0';
		write(1, &x, 1);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
int ft_putunsignedint(unsigned int n)
{
    int count;
}