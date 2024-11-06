#include "ft_printf.h"

int ft_control_chars(char const c, va_list args)
{
	int aux1;
	char*aux2;
	int toreturn;

	toreturn = 0;
	if (c == 'c')
	{
		aux1 = va_arg(args, int);
		toreturn += ft_putchar(aux1);
	}
	else if (c == 's')
	{
		aux2 = va_arg(args, char *);
		toreturn += ft_putstr(aux2);
	}
	return (toreturn);
}

int ft_control_pointer(va_list args) 
{
	unsigned long long  aux;
	int                 toretorn;

	toretorn = '0';
	aux = va_arg(args, unsigned long long);
	if (!aux)
	{
		toretorn += ft_putstr("(nil)");
	}
	else
	{
		toretorn += ft_putstr("0x");
		toretorn += ft_puthex(aux, 0);   
	}
}
