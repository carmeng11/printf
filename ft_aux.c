int	ft_putchar(int c)
{
	int toreturn;

	toreturn = 0;
	write (1, &c, 1)
	return (toreturn);
}


int ft_puthex(unsigned long long n, int bol)
{
	char	min;
	char	may;
	int		toreturn;

	toreturn = 0;
	min = "0123456789abcdef"[n % 16];
	may = "0123456789ABCDEF"[n % 16];
	if (n >= 16)
		toreturn += ft_puthex(n / 16, bol);
	if (!bol)
		toreturn += ft_putchar(min);
	else
		toreturn += ft_putchar(may);
	return (toreturn);
}

#include <unistd.h>
//#include <stdio.h>

int	ft_putnbr(int n)
{
	int	toreturn;

	toreturn = 0;
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