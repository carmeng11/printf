#include "ft_printf.h"

static int	ft_control(char const c, va_list args)
{
	int count;

	count = 0;
	if (c == 'c' || c == 's')
		count += ft_control_chars(c, args);
	else if (c == 'p')
		count += ft_control_pointer(args);
	else if (c == 'd' || c == 'i' || c == 'u')
		count += ft_control_ints(c, args);
	else if (c == 'x' || c == 'X')
		count += ft_control_hex(c, args);
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int ft_printf(char const *format, ...)
{
	va	list args;
	int	i;
	int	count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_control(format[i], args);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}