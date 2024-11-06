int ft_putchar(char c)

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
